#include <lib/pen.h>

void embua(Pen &p, int lado){
    int x = lado;
    if(x<10)
        return;

    p.setColor(0, 255 , 255);
    while(x > 10){
        p.walk(x);
        p.right(90);
        x -= 10;
    }
    p.setColor(255, 0, 0);
    while(x <= 400){
        x += 10;
        p.left(90);
        p.walk(-x);

    }


}


void fractal(){
    Pen p(800, 600);
    //coloca o pincel na posicao x 300 y 500
    p.setXY(400, 500);
    p.setThickness(3);
    int lado = 400;
    //faz o pincel apontar pra direita
    p.setHeading(90);
    //se speed = 0 entao ele faz o mais rapido possivel
    //se foi a partir de 1 ele controla a velocidade
    p.setSpeed(20);
    embua(p, lado);
    //espera clicar no botao de fechar
    p.wait();



}

int main(){
    fractal();
    return 0;
}
