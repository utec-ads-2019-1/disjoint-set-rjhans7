#include <iostream>
using namespace std;
#ifndef DISJOINT_SET_RJHANS7_NODE_H
#define DISJOINT_SET_RJHANS7_NODE_H


template <typename T>
class Node{
    T data;
    int rank;
    Node <T>* parent;

public:
    Node(T value){
        data = value;
        parent = this;
        rank = 0;
    }
    void addParent(Node <T>* padre){
        parent = padre;
        padre->rank=1;
    };
    void arbUnion(Node<T> nuevo){
        nuevo.parent = this;
        rank+=nuevo.rank;
    }
    void print(){
        cout<<"Node: "<<data<< " Parent: "<<parent->data<<" Rank: "<<rank <<endl;
    }
};

#endif //DISJOINT_SET_RJHANS7_NODE_H