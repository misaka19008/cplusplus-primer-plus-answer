#include "exec4.h"
Stack::Stack(int n){
    top=0;
    size=n;
    pitem=new Item[n];
}

Stack::Stack(const Stack & st){
    if (pitem != nullptr)
    {
        delete [] pitem;
        pitem=new Item[MAX];
        for (int i = 0; i < st.size; i++) pitem[i]=st.pitem[i];
    }
    else
    {
        pitem=new Item[MAX];
        for (int i = 0; i < st.size; i++) pitem[i]=st.pitem[i];
    }
}

Stack::~Stack(){
    if (pitem != nullptr) delete [] pitem;
}

bool Stack::isempty() const { return top==0; }
bool Stack::isfull() const { return top==MAX; }

bool Stack::push(const Item & item){
    if (top < MAX)
    {
        pitem[top++]=item;
        return true;
    }
    else return false;
}

bool Stack::pop(Item & item){
    if (top > 0)
    {
        item=pitem[--top];
        return true;
    }
    else return false;
}

Stack & Stack::operator=(const Stack & st){
    if (&st == this) return *this;
    else
    {
        delete [] pitem;
        pitem=new Item[MAX];
        for (int i = 0; i < st.size; i++) pitem[i]=st.pitem[i];
        return *this;
    }
}