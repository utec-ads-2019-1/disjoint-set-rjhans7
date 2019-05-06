#include "Node.h"
template <typename T>
class djtSet{
    Node<T>* root;
public:

    djtSet(){
        root = nullptr;
    }
    bool find(Node <T> data){

    }
    void makeSet(T data){
        if (!find(data)) {
            auto newNode = new Node<T>;
            if (root) {
                newNode->parent = root;
                root->rank++;
            } else {
                root = newNode;
            }
        }

    }
    void uarb(){

    }


};