#include <lib/pen.h>


void arvore(Pen &p, int lado, float exp){
    float ang = 35;
    float dec = 17;
    if(lado < 20) p.setColor(0, 128, 0);
    if(lado < 10)
        return;

    p.setColor(150, 75, 0);
    p.walk(lado);
    p.right(ang);
    p.setThickness(exp);
    arvore(p, lado-dec, exp-1.5);
    p.left(2*ang);
    arvore(p, lado-dec, exp-1.5);
    p.right(ang);
    p.walk(-lado);
}


void fractal(){
    Pen p(800, 600);
    //coloca o pincel na posicao x 300 y 500
    p.setXY(400, 500);
    p.setThickness(3);
    int lado = 120;
    //faz o pincel apontar pra direita
    p.setHeading(90);
    //se speed = 0 entao ele faz o mais rapido possivel
    //se foi a partir de 1 ele controla a velocidade
    p.setSpeed(20);
    float exp = 10;
    arvore(p, lado, exp);
    //espera clicar no botao de fechar
    p.wait();



}

int main(){
    fractal();
    return 0;
}
