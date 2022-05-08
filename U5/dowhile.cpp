#include<iostream>
using namespace std;
int main(){
    int n;

    do
    {
        cout<<"Enter numbers in the range 1-10 to find my favorite number: ";
        cin>>n;
    } while (n != 7);
    cout<<"Yes, 7 is my favorite."<<endl;

    system("pause");
    return 0;
}