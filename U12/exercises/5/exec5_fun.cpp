#include<cstdlib>
#include "exec5.h"

Queue::Queue(int qs) : qsize(qs) {
    front=rear=NULL;
    items=0;
}

Queue::~Queue(){
    Node * temp;
    while (front != NULL)
    {
        temp=front;
        front=front->next;
        delete temp;
    }
}

bool Queue::enqueue(const Item & item){
    if (isfull()) return false;
    else
    {
        Node * add=new Node;
        add->item=item;
        add->next=NULL;
        items++;
        if (front == NULL) front=add;
        else rear->next=add;
        rear=add;
        return true;
    }
}

bool Queue::dequeue(Item & item){
    if (front == NULL) return false;
    else
    {
        item=front->item;
        items--;
        Node * temp=front;
        front=front->next;
        delete temp;
        if (items==0) rear=NULL;
        return true;
    }
}

Customer::~Customer() {/* Default destructor */}

void Customer::set(long when){
    processtime=std::rand()%3+1;
    arrive=when;
}