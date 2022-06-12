#include<iostream>
#include<string>
#include<new>
const int BUFFER=512;
using namespace std;

class justTesting
{
private:
    string words;
    int number;
public:
    justTesting(const string & s="Just Testing",int n=0) { words=s; number=n; cout<<words<<" constructed."<<endl; }
    ~justTesting() { cout<<words<<" destructed."<<endl; }
    void show() const { cout<<words<<", "<<number<<endl; }
};

int main(){
    char * buffer=new char[BUFFER];
    justTesting * pc1=new (buffer) justTesting;
    justTesting * pc2=new justTesting("Heap1",20);
    justTesting * pc3=new (buffer) justTesting("Bad idea",6);
    justTesting * pc4=new justTesting("Heap2",10);

    cout<<"Memory block addresses:"<<endl;
    cout<<"Buffer: "<<(void *)buffer<<"     Heap: "<<pc2<<endl<<endl;
    cout<<"Memory contents:"<<endl;
    cout<<pc1<<": ";
    pc1->show();
    cout<<pc2<<": ";
    pc2->show();

    cout<<endl<<"Memory contents:"<<endl;
    cout<<pc3<<": ";
    pc3->show();
    cout<<pc4<<": ";
    pc4->show();

    delete pc2;
    delete pc4;
    delete [] buffer;
    cout<<"Done!"<<endl;

    system("pause");
    return 0;
}