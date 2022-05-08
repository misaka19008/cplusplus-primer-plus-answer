#include<iostream>
using namespace std;
int main(){
    int rats=101;
    int & rodents=rats;

    cout<<"rats = "<<rats<<", rodents = "<<rodents<<endl;
    rodents++;
    cout<<"rats = "<<rats<<", rodents = "<<rodents<<endl;
    cout<<"rats address = "<<&rats<<", rodents address = "<<&rodents<<endl;

    system("pause");
    return 0;
}