#include<iostream>
#include<climits>
using namespace std;
bool is_int(double);
int main(){
    int val;
    double num;

    cout<<"Yo, dube! Enter an integer value: ";
    cin>>num;
    while (is_int(num) != true)
    {
        cout<<"Out of range! Please try again: ";
        cin>>num;
    }
    val=int(num);
    cout<<"You've entered the integer "<<val<<"."<<endl;
    cout<<"Bye!"<<endl;
    
    system("pause");
    return 0;
}

bool is_int(double n){
    if (n <= INT_MAX && n >= INT_MIN)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}