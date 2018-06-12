#include <iostream>
#include <vector>
#include <tuple>
using namespace std;

enum Marcador {VAZIO = 0, CHEIO = 1, DELETADO = 2};
struct Item{
    Elem elem;
    Marcador marc;

};



struct Elem {
    int key; //
    string value;

    Elem(int key = 0, string value = ""){
        this->key = key;
        this->value = value;
    }

    bool operator ==(Elem other){
        return key == other.key;
    }

    friend ostream& operator << (ostream& os, Elem e){
        os << e.key;
        return os;
    }
};

struct HashLinear{ //linear probing
    pair<Elem, Marcador> * vet; //marc
    int capacity;
    int size;
    HashLinear(int capacity){
        vet = new pair<Elem, Marcador>[capacity];
        this->capacity = capacity;
        this->size = 0;
        for(int i = 0; i < capacity; i++){
            vet[i].first = Elem();
            vet[i].second = VAZIO;
        }
    }

    bool insert(Elem elem){
        auto it = find(elem.key);
        if(it == nullptr)
            return false;
        pos = key % capacity;
        while((vet[pos] != VAZIO) || (vet[pos] != DELETADO)){
                pos = (pos + 1) % capacity;
        }
        vet[pos].first = elem;
        vet[pos].second = CHEIO;
        vet->size ++;


    }
    int find(int key){
        int base = key % capacity;
        int i = 0;
        while(vet[pos].second != VAZIO || vet[pos].second != DELETADO){
            i++;
            pos = base(base + i) % capacity; // i*i = busca quadratica
        }
        if(vet[pos].second == VAZIO)
            return -1;
        return vet[pos].first;

    }


    bool remove(int key){
        int pos = find(key);
        if(pos != -1){
             vet[pos].marcador = VAZIO;
             return false;
        }
        size--;
        pos = (pos+1) % capacity;
        while(vet[pos].marcado!= VAZIO){
            vet[pos].marcador = VAZIO;
            inserir(vet[pos].elem);
            pos = (pos+1) % capacity;
        }
        return true;
    }

    pair<Elem, Marcador> * find(int key){
        int pos = key % capacity;
        int i = 0;
        while(vet[pos].second != vazio || vet[pos].first != key){
            i++;
            pos = base(base + i) % capacity; // i*i = busca quadratica
        }
        if(vet[pos].second == VAZIO)
            return -1;
        return vet[pos].first;

    }

    void resize(int capacity){
        auto vet_old = vet;
        vet = new pair<...>[capacity];
        for(auto i = 0; ...)
            vet[i].marcador = VAZIO;
        for(auto& elem : vet_old)
            insert(elem);
            delete vet_old;
    }

}

int main()
{
    cout << "Hello World!" << endl;
    return 0;
}
