#include<iostream>
using std::cout;
using std::endl;

int mice(void);
int howTheyRun(void);

int main(){
    mice();
    mice();
    howTheyRun();
    howTheyRun();
    
    return 0;
}

int mice(){
    cout<<"Three blind mice"<<endl;
}

int howTheyRun(){
    cout<<"See how they run"<<endl;
}