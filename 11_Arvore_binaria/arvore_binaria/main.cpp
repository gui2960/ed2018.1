#include <iostream>

using namespace std;
struct Node{
    int value;
    Node * left;
    Node * right;
//    Node[2] kids; // árvore com N filhos ----> Node * kids;2
    Node(){

    }

    Node(int value, Node * left, Node * right):
        value(value), left(left), right(right){
    }
};

struct Tree{
    Node *root;
    lista(){
        root = nullptr;
    }

    Tree(Tree other){
        root = clone(other.root)
    }

    Node * clone(Node * node){
        if(node == nullptr)
            return nullptr;
        return new Node = new Node(node->value,node->left, node->right);
    }

    bool equals(Lista other){
        return equals(this->head, other.head);
    }

    bool equals(Node * node, Node * other){
        if((node == nullptr) && (other == nullptr))
            return true;
        if((node == nullptr) || (other == nullptr))
            return false;
        if(node->value != other->value)
            return false;
        return equals(node->left, other->left) &&
               equals(node->right, other->right);
    }


    ~Tree(){
        Node * node = root;
        while(node != nullptr){
           auto l = node->left;
           auto r = node->right;
                delete node;
                node->left = l;
                node->right = r;
        }
    }


    void erase(Node *node){
        if(node == nullptr)
            return;
        erase(node->right);
        erase(node->left);
        delete node;
    }


    Node * find(Node *node, int key){
        if(node == nullptr)
            return nullptr;
        if(node->key == key)
            return node;
        auto resp = find(node->left,key);
        if(resposta != nullptr)
            return resp;
        return find(node->right,key);

    }




};


int main()
{
    cout << "Hello World!" << endl;
    return 0;
}

