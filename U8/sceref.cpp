#include<iostream>
using namespace std;
int main(){
    int rats=101;
    int & rodents=rats;
    cout<<"rats = "<<rats<<", rodents = "<<rodents<<endl;
    cout<<"rats address = "<<&rats<<", rodents address = "<<&rodents<<endl;

    int bunnies=50;
    rodents=bunnies;
    cout<<"bunnies = "<<bunnies<<", rats = "<<rats<<", rodents = "<<rodents<<endl;
    cout<<"bunnies address = "<<&bunnies<<", rodents address = "<<&rodents<<endl;

    system("pause");
    return 0;
}