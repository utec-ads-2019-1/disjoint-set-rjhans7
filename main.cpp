#include "Node.h"
#include "djtset.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

/*
bool find (int value, map <Node<int>*, Node <int>>* store){
    for (auto it = store->begin();it!=store->end();++it){
        if ((it->second).data==value)
            return true;
    }
        return false;
}
bool add(int value, map <Node<int>*, Node <int>>* store){
    if (find(value, store))
        return true;
    else{
        auto val = Node <int> (value);
        if(store->empty()){
            store->insert({&val, val});

        }
        }
}
*/

int main(){

    auto node1 = Node<int> (1);
    auto node2 = Node<int> (2);
    auto node3 = Node<int> (3);
    auto node4 = Node<int> (4);
    auto node5 = Node<int> (5);
    auto node6 = Node<int> (6);

    node2.addParent(&node1);
    node3.addParent(&node2);
    node5.addParent(&node4);
    node6.addParent(&node5);
    node2.print();
    node3.print();
    node1.print();
    node1.arbUnion(node4);
    node1.print();


}