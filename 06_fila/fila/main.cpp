#include <iostream>

using namespace std;

struct  Node{
    int value;
    Node* next;

    Node(int value = 0, Node * next = nullptr){
        this->value = value;
        this->next = next;
    }


};

struct SList{

    Node* head;

    SList(){
        this->head = nullptr;
    }

   // ~Slist(){}

    void deletarTudo(Node * node){
        if(node->next == nullptr)
            return;
        delete node;
        deletarTudo(node->next);
    }

    //Procura o valor, remove desse nó em diante
    Node * cortarRabo (Node * node, int value);

    void push_front(int value){
        //this->head = new Node(value, this->head);
        Node * node = new Node(value);
        node->next = head;
        this->head = node;
    }

    void pop_front(){
        if(head == nullptr)
            return;
        Node * aux = head;
        head = head->next;
        delete aux;
    }

    void push_back(int value){
        if(head == nullptr){
            head = new Node(value);
            return;
        }
        auto node = head;
        while(node->next != nullptr)
            node = node->next;
        node->next = new Node(value);
    }

    void _rpush_back(Node* node, int value);

    int size(); //fazer


    void pop_back(){
        if(head == nullptr)
            return;
        if(head->next == nullptr){
            delete head;
            head = nullptr;
            return;
        }
        auto node = head;
        while(node->next->next != nullptr)
            node = node->next;
        delete node->next;
        node->next = nullptr;
    }

    void ishow(){
        auto node = head;
        while(node != nullptr){
            cout << node->value << " ";
            node = node->next;
        }
        cout << endl;
    }

    void _rshow(Node * node){
        if(node == nullptr)
            return;
        cout << node->value << " ";
        _rshow(node->next);

    }

    void rshow(){
        cout << endl;
        _rshow(head);

    }

    Node * _rpop_back(Node * node){
        if(node->next == nullptr){
            delete node;
            return nullptr;
        }
        node->next = _rpop_back(node->next);
    }

    void rpop_back(){
        this->head = _rpop_back(head);
    }

    Node * _remove(Node * node, int value){
        if(node == nullptr)
            return nullptr;
        if(node->value == value){
            auto aux = node->next;
            delete node;
            return aux;
        }
        node->next = _remove(node->next, value);
    }

    void remove(int value){
        head = _remove(head, value);
    }

    void rremove(int value){
        head = _remove(head, value);
    }


    Node * iremove(int value){
        auto node = head;

        if(node == nullptr)
            return node;
        if(node->value == value && node->next == nullptr)
            pop_back();
            return node;
        while(node->next->value == value){
            auto* aux = node->next->next;
            node->next = nullptr;
            delete node->next;
            head = aux;

        }
        return node;
    }

    void inserir_ordenado(int value){
        auto node = head;
        if(head->value > value || head == nullptr){
            this->head = new Node(value, head);
            return;
        }

        while(node->next != nullptr && node->next->value > value){
            node = node->next;

        }
        node->next = new Node(value, node->next);


    }

    Node *_rinserir_ordenado(Node * node, int value); //fazer

    void rinserir_ordenado(int value); //fazer

    int rsomar(Node *node){
       int soma;
       if(node->next == nullptr)
           return node->value;
       return soma += rsomar(node->next);

    }

    int rmin(Node * node){
        if(node->next == nullptr)
            return node->value;
       return std::min(node->value , rmin(node->next));

    }

    string serialize(Node * node); //fazer


};


int main()
{
    cout << "Hello World!" << endl;
    return 0;
}
