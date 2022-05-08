#include<iostream>
using namespace std;
void cheers(int);
double cube(double);
int main(){
    double side;
    double volume;

    cheers(5);
    cout<<"Give me a number: ";
    cin>>side;
    volume=cube(side);
    cout<<"A "<<volume<<"-foot cube has a volume of "<<volume<<" cubic feet."<<endl;
    cheers(cube(2));

    system("pause");
    return 0;
}

void cheers(int n){
    for (int i = 0; i < n; i++)
    {
        cout<<"Cheers!";
    }
    cout<<endl;
}

double cube(double x){
    return x*x*x;
}