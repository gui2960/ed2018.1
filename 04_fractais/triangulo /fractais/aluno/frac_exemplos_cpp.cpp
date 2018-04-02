#include <lib/pen.h>


void triangulo(Pen &p, int lado){
    int ang = 120;
    int dec = 17;
    int i = 0;
    if (lado<20)
        return;
    p.setColor(rand()%255, rand()%255, rand()%255);
    for(i = 0; i < 3; i++){
        p.walk(lado);
        p.left(ang);
        triangulo (p, lado/2);
    }

}


void fractal(){
    Pen p(800, 600);
    //coloca o pincel na posicao x 300 y 500
    p.setXY(400, 500);
    p.setThickness(3);
    int lado = 300;
    //faz o pincel apontar pra direita
    p.setHeading(0);
    //se speed = 0 entao ele faz o mais rapido possivel
    //se foi a partir de 1 ele controla a velocidade
    p.setSpeed(20);

    triangulo (p, lado);

    //espera clicar no botao de fechar
    p.wait();



}

int main(){
    fractal();
    return 0;
}
