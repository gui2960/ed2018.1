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

//    ~Slist(){
//        head =deletarTudo(head);
//    }

//    Slist(string serialize){
//        stringstream ss(serialize);
//        int value;
//         while(ss >> value){
//            this->push_back(value);
//        }

//    }

//    string serialize(Node * node){
//       if(node->value == nullptr)
//            return;
//        ss << node->value;
//        return _serialize(ss, node->next);
//    }

    void clear(){
        head = deletarTudo(head);
    }

    Node * deletarTudo(Node * node){
        if(node->next == nullptr)
            return nullptr;
        deletarTudo(node->next);
        delete node;
        return nullptr;

    }

    //Procura o valor, remove desse nó em diante
    Node * arrancaRabo (Node * node, int value){
            if(node->next == nullptr)
                return nullptr;
            if(node->next != nullptr){
                if(node->value != value){
                    delete node;
                    return nullptr;
                }
                else{
                    return node;
                }
            }
            node->next = arrancaRabo(node->next, value);
            return node;
     }
    //Procura o valor, remove desse nó para trás
        Node * arrancaVenta (Node * node, int value){
        if(node->next == nullptr)
            return nullptr;
        node->next = arrancaVenta(node->next, value);
        if(node->next != nullptr){
            if(node->value != value){
                delete node;
                return nullptr;
            }
            else{
                return node;
            }
        }
        return node;
    }






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

    void _rpush_back(Node* node, int value){

        if(head == nullptr)
            head = new Node(value);
            return;


        _rpush_back(node->next, value);
        node = node->next;
        node->next = new Node(value);
     }

    int size(Node * node){
            int cont = 0;
        while(node->next != nullptr){
            cont++;
        }
        return cont;
    }


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


   void iremove(int value){
       if(head == nullptr)
           return;
       if(head -> value == value){
           delete head;
           head = nullptr;
           return;
       auto node = head;
            while(node->next->value != value)
                node = node->next;
            delete node->next;
            node->next = node;
    }
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

    Node * _rinserir_ordenado(Node * node, int value){
         if(node==nullptr){
              return new Node(value);
         }
         if(node->value> value){
             return new Node(value,node);
         }
         node->next= _rinserir_ordenado(node->next,value);
         return node;
    }

    void rinserir_ordenado(int value){
         this->head=_rinserir_ordenado(head,value);

    }


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


};


int main()
{
    cout << "Hello World!" << endl;
    SList x;

    x.push_back(5);
    x.push_back(3);
    x.push_back(4);
    x.push_back(2);
    x.iremove(2);
    x.rshow();
    return 0;
}
