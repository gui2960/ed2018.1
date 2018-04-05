#include <lib/pen.h>


void trigo(Pen &p, int lado){
 int i;
    if(lado < 0.1)
      return;
  p.setColor(255, 255, 0);
  for(i = 0; i < 4; i++){
      p.walk(lado);
      p.right(45);
      trigo(p, lado/4);
      p.left(90);
      trigo(p, lado/4);
      p.right(45);
  }
  p.walk(-lado*4);

}


void fractal(){
    Pen p(800, 600);
    //coloca o pincel na posicao x 300 y 500
    p.setXY(400, 500);
    p.setThickness(3);
    int lado = 100;
    //faz o pincel apontar pra direita
    p.setHeading(90);
    //se speed = 0 entao ele faz o mais rapido possivel
    //se foi a partir de 1 ele controla a velocidade
    p.setSpeed(10);

    trigo(p, lado);
    //espera clicar no botao de fechar
    p.wait();



}

int main(){
    fractal();
    return 0;
}
