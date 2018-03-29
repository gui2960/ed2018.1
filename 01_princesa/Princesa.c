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
    for(i = 0; i < *qtd - 1; i++) vet[i] = vet[i + 1];
    *qtd -= 1;

}
void push_back(int vet[], int *qtd){
    int value = vet[0];
    vet[*qtd] = value;
    *qtd += 1;
}

void rodar(int vet[], int *qtd){
    push_back(vet, qtd);
    pop_front(vet, qtd);

}


void mostrar(int vet[], int *qtd){
    int i;
    for(i = 0; i < *qtd; i++){
        printf("%d ",vet[i]);
        printf("\n");
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
    scanf("%d", &qtd);


    printf("Digite quem e o primeiro: ");
    scanf(" %d", &primeiro);

    //CRIA O VETOR

    int vet[qtd];

    //INICIA O VETOR

    for(i = 0; i < qtd; i++)push_back(vet, &qtd);

    // RODA O VETOR ATÉ QUE O PRIMEIRO (QUEM ESTÁ COM A FACA) FIQUE NO VET[0]

    for( k = 0; k < qtd; k++) if(vet[k]!=primeiro) rodar(vet, &qtd);


    // INICIA O "JOGO"

    while(tamanho(&qtd) > 1){
        rodar(vet, &qtd);
        pop_front(vet, &qtd);
        mostrar(vet, &qtd);
    }



    return 0;
}
