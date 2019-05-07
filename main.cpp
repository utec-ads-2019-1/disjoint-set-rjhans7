#include "Node.h"
#include "djtset.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
int main(){

    int len = 6;
    auto myVec= new vector <Node<int>*>;
    for (int i=0; i<len ; i++){
        myVec->push_back(new Node<int>(i));
    }
    for (int i =0; i<len-1; i++) {
        myVec->at(i + 1)->addParent(myVec->at(i));
        myVec->at(i)->print();
    }
    cout << "-------------"<<endl;
    for (int i=0; i<len-1; i++) {
        myVec->at(i+1)->rankUnion(myVec->at(i));
        myVec->at(i)->print();
    }
}