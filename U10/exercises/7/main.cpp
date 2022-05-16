#include<iostream>
#include "exec7.h"
using namespace std;
int main(){
    Plorg data("Plorga",50);
    
    cout<<"Default:"<<endl;
    data.showPlorg();
    cout<<endl;

    cout<<"After:"<<endl;
    data.setNewCI(95);
    data.showPlorg();

    system("pause");
    return 0;
}