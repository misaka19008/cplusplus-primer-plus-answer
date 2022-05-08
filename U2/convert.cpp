#include<iostream>
using namespace std;

int stonetolb(int);

int main(){
    int stone;
    int pound;

    cout<<"Enter the weight in stone:";
    cin>>stone;
    pound=stonetolb(stone);
    cout<<stone<<" stone = ";
    cout<<pound<<" pounds."<<endl;
    system("pause");
    return 0;
}

int stonetolb(int sts){
    return 14*sts;
}