#include<iostream>
#include<cmath>

using namespace std;

int main(){
    double area;
    double side;

    cout<<"Enter the floor area,in square feet,of your home:";
    cin>>area;
    side=sqrt(area);
    cout<<endl;
    cout<<"That's the equivalent of a square:"<<side
    <<" feet to the side."<<endl;
    cout<<"How fascinating!"<<endl;
    system("pause");
    return 0;
}