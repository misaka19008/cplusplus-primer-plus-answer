#ifndef EXEC8_H_
#define EXEC8_H_

typedef unsigned long Item;
void showItem(Item & item);
class List
{
private:
    enum {MAX=10};
    Item num_list[MAX];
    int top;
public:
    List();
    ~List();
    bool isEmpty() const;
    bool isFull() const;
    int push(const Item & item);
    void visit(void (*pf)(Item&));
};

#endif