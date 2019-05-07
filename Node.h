#include <iostream>
using namespace std;
#ifndef DISJOINT_SET_RJHANS7_NODE_H
#define DISJOINT_SET_RJHANS7_NODE_H


template <typename T>
class Node{
    T data;
    int rank;
    int size;
    Node <T>* parent;

public:
    Node(T value){
        data = value;
        parent = this;
        rank = 0;
        size = 0;
    }
    void addParent(Node <T>* padre){
        parent = padre;
        padre->rank=1;
        padre->size++;
    };
    void arbUnion(Node<T>* nuevo){
        nuevo->parent = this;
        rank+=nuevo->rank;
        size+=nuevo->size+1;
    }
    void killDuplicated(){
        auto temp = parent;


    }
    void rankUnion(Node<T>* nuevo){
        if(nuevo->rank > this->rank){
            parent=nuevo->parent;
            nuevo->rank+=rank;
            nuevo->size=size+1;
        }else{
            nuevo->parent=this;
            rank+=nuevo->rank;
            size+=nuevo->size+1;
        }

    }
    bool find(T valor){
        auto temp = parent;
        while(temp->parent!=temp){
            if(temp->data==valor)
                return true;
        temp = temp->parent;
        }
        return false;
    };

    void sizeUnion(Node<T>* nuevo){
        if(nuevo->size > this->size){
            parent=nuevo->parent;
            nuevo->rank+=rank;
            nuevo->size=size+1;
        }else{
            nuevo->parent=this;
            rank+=nuevo->rank;
            size+=nuevo->size+1;
        }
    }

    void print(){
        cout<<"Node: "<<data<< " Parent: "<<parent->data<<" Rank: "<<rank <<endl;
    }
};

#endif //DISJOINT_SET_RJHANS7_NODE_H