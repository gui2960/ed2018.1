#include <lib/pen.h>


void arvore(Pen &p, int lado){
    if (lado<20)
        return;

    p.left(90);
    p.walk(lado);




}


void fractal(){
    Pen p(800, 600);
    //coloca o pincel na posicao x 300 y 500
    p.setXY(400, 400);
    int lado = 300;
    //faz o pincel apontar pra direita
    p.setHeading(20);
    //se speed = 0 entao ele faz o mais rapido possivel
    //se foi a partir de 1 ele controla a velocidade
    p.setSpeed(20);

    arvore(p, lado);

    //espera clicar no botao de fechar
    p.wait();



}

int main(){
    fractal();
    return 0;
}
