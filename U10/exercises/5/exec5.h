#ifndef EXEC5_H_
#define EXEC5_H_

struct Customer
{
    char fullname[90];
    double payment;
};

typedef Customer Item;

class Stack
{
private:
    enum {MAX=10};
    Item items[MAX];
    int top;
public:
    Stack();
    ~Stack();
    bool isEmpty() const;
    bool isFull() const;
    bool push(const Item & item);
    bool pop(Item & item);
    int getTop();
};

#endif