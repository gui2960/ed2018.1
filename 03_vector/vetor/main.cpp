#include <iostream>
#include <vector>

using namespace std;

struct Vetor{
    int *_data;//bloco de dados
    int _capacidade;//tamanho maximo do vetor
    int _size; //quantos elementos estao inseridos

    Vetor(int capacidade){
        this->_capacidade = capacidade;
        this->_size = 0;
        //        this->data = (int*) malloc(capacidade * 4);//retorno lixo
        this->_data = new int[capacidade];//retorno zerado
    }
    void push_back(int value){
        if(this->_size == this->_capacidade)
            return;
        //this->reserve(2 * _capacitade);
        this->_data[this->_size] = value;
        this->_size += 1;
    }
    void pop_back(){
        if(this->_size == 0)
            return;
        this->_data[_size] = 0;
        this->_size -= 1;
    }


    //retornar a refencia à variavel dessa posicao
    int& at(int indice){
        return this->_data[indice];
    }
    int& front(){
        return this->_data[0];
    }
    int& back(){
        return this->_data[this->_size - 1];
    }
    int * begin(){
        return &this->_data[0];
    }
    int * end(){
        return &this->_data[this->_size];
    }
    int size(){
        return this->_size;

    }
    int capacity(){
        return this->_capacidade;

    }

    void reserve(int capacity){
        int i = 0;
        int guardar[capacity];
        if(capacity >= this->_capacidade){
            for(i = 0; i <_size; i++)
                guardar[i] = this->_data[i];
            this->_data = new int[capacity];
            delete this->_data;
            this->_data = guardar;
        }
        else{

            for(i = 0; i < this->_capacidade; i++)
                guardar[i] = this->_data[i];
            this->_data = new int[capacity];
            delete this->_data;
            this->_data = guardar;

        }
    }


};


int main()
{

    Vetor v = *new Vetor(10);
    for(int i = 0; i < 10; i++) v._data[i] = i;
    v.push_back(10);
    cout << v.at(3) << endl;
    v.pop_back();
    for(int i = 0; i < 10; i++) v._data[i] = i;
    cout << v.back() << endl;
    cout << v.begin() << endl;
    cout << v.capacity() << endl;
    cout << v.end() << endl;
    cout << v.front() << endl;
    v.reserve(19);
    cout << v.capacity() << endl;
    cout << v.size() << endl;
}











