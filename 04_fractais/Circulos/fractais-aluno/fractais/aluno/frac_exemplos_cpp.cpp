#include <lib/pen.h>


void Circulos(Pen &p, int lado){
  int i;
    if(lado < 1)
      return;
    p.setColor(122, 12 , 0);
  for(i = 0; i < 6; i++){
      p.left(60);
      p.up();
      p.walk(lado);
      p.down();
      Circulos(p,lado*2/6);
      p.up();
      p.walk(-lado);
      p.down();




  }

}


void fractal(){
    Pen p(800, 600);
    //coloca o pincel na posicao x 300 y 500
    p.setXY(400, 300);
    p.setThickness(1);
    int lado = 200;
    //faz o pincel apontar pra direita
    p.setHeading(90);
    //se speed = 0 entao ele faz o mais rapido possivel
    //se foi a partir de 1 ele controla a velocidade
    p.setSpeed(30);

    Circulos(p, lado);
    //espera clicar no botao de fechar
    p.wait();



}

int main(){
    fractal();
    return 0;
}
