#include <iostream>
#include <ctime>
#include <cstdlib> //rand
#include "libs/ed_sort.h"

using namespace std;

//cores rgbcymkw
//red, green, blue, cyan, yellow, magenta, black, white

void minimum_sort(vector<int>& vet){
    int ultimo = vet.size() -1;

    for(int i = 0; i <= ultimo; i++, ultimo--){

        int imaior = i;
        int imenor = i;

        for(int j = i +  1; j <= ultimo; j++){

            view_show(vet, {i, j, imaior, imenor, ultimo}, "rgyyr");

            if(vet[imaior] < vet[imenor])
                swap(vet[imaior], vet[imenor]);

            if(vet[j] < vet[imenor]){
                imenor = j;
                 view_show(vet, {i, j, imaior, imenor, ultimo}, "rgyyr");
            }

            if(vet[j] > vet[imaior]){
                imaior = j;
                 view_show(vet, {i, j, imaior, imenor, ultimo}, "rgyyr");
            }
        }

        std::swap(vet[imenor], vet[i]);
        std::swap(vet[imaior], vet[ultimo]);

        view_show(vet, {i, imaior, imenor, ultimo}, "ryyr");
    }
}

int main(){
    srand(time(NULL));
    const int qtd = 70;
    vector<int> vet(qtd, 0);

    int min = 10;
    int max = 400;

    for(int i = 0; i < qtd; i++)
        vet[i] = (rand() % (max - min + 1) + min);

    view_set_bar();
    view_set_faixa(0, qtd - 1);

    minimum_sort(vet);

    view_lock();
    return 0;
}





















