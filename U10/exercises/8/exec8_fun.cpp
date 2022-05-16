#include<iostream>
#include "exec8.h"
using namespace std;

List::List() { top=0; }

List::~List() { 
    // Default constructor.
}

bool List::isEmpty() const { return top==0; }

bool List::isFull() const { return top==MAX; }

int List::push(const Item & item){
    if (top < MAX)
    {
        num_list[top++]=item;
        return 0;
    }
    else return 1;
}

void List::visit(void (*pf)(Item&)){
    for (int i = 0; i < top; i++) pf(num_list[i]);
}

void showItem(Item & item){
    cout<<item<<"\t";
}