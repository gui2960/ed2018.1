#include<stdio.h>
#include<stdlib.h>

/*
    Tentei editar o código em c++ feito em sala para C porém não entendi o sentido da variável "value" na função, a qual foi substituida pelo vet[0] que era a
    váriavel na qual sempre iria buscar.


*/

int tamanho (int *qtd){
    int i=0;
    while(i <= *qtd){
        i++;

    }
    return i;
}

void pop_front(int vet[], int *qtd){
    int i;
    for(i = 0; i < *qtd - 1; i++)
        vet[i] = vet[i + 1];
        *qtd -= 1;

}
void push_back(int vet[], int *qtd, int value){
     vet[*qtd] = value;
     *qtd += 1;

}

void rodar(int vet[], int *qtd, int value){
    push_back(vet, qtd, value);
    pop_front(vet, qtd);

}


void mostrar(int vet[], int *qtd, int ant){
    int i;
    for(i = ant; i <= *qtd; i++){
        printf("%d \n",vet[i]);

    }
}


int main(){
    //VARIAVEIS

    int qtd = 0;
    int primeiro = 0;
    int i = 0;
    int k = 0;
    //RECEBE OS AMIGOS E QUEM ESTÁ COM A FACA

    printf("Digite a quantidade de amigos: ");
    scanf(" %d", &qtd);
    int ant = qtd;

    printf("Digite quem e o primeiro: ");
    scanf(" %d", &primeiro);

    //CRIA O VETOR

    int vet[qtd];

    //INICIA O VETOR

    for(i = 1; i <= qtd; i++)
        push_back(vet, &qtd, i);

    // RODA O VETOR ATÉ QUE O PRIMEIRO (QUEM ESTÁ COM A FACA) FIQUE NO VET[0]
    mostrar(vet, &qtd, ant);

    // for( k = ant; k <= qtd; k++) if(vet[k]!=primeiro) rodar(vet, &qtd, k);



    // INICIA O "JOGO"


   /* while(tamanho(&qtd) > 1){
        rodar(vet, &qtd, tamanho(&qtd));
        pop_front(vet, &qtd);
        mostrar(vet, &qtd);

    }

*/
    return 0;
}
