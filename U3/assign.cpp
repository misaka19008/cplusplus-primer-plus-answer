#include<iostream>
using namespace std;
int main(){
    cout.setf(ios_base::fixed,ios_base::floatfield);
    float tree=3;
    int guess(3.9832);
    int deut=7.2E12;

    cout<<"tree = "<<tree<<endl;
    cout<<"guess = "<<guess<<endl;
    cout<<"deut = "<<deut<<endl;

    system("pause");
    return 0;
}