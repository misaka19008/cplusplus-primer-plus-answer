#include<iostream>
using namespace std;
double add(double,double);
double multi(double,double);
void calculate(double,double,double (*ptr)(double,double));

int main(){
    double num_x=0.0;
    double num_y=0.0;

    cout<<"Enter number \"x\": ";
    cin>>num_x;
    cout<<"Enter number \"y\": ";
    cin>>num_y;
    cout<<"x + y = ";
    calculate(num_x,num_y,add);
    cout<<endl<<"x * y = ";
    calculate(num_x,num_y,multi);
    cout<<endl<<"Done!"<<endl;

    system("pause");
    return 0;
}

double add(double x,double y){
    return x+y;
}

double multi(double x,double y){
    return x*y;
}

void calculate(double x,double y,double (*ptr)(double,double)){
    cout<<(*ptr)(x,y);
}