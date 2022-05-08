#include<iostream>
using namespace std;
int main(){
    int sum=0;
    int num_input;

    cout<<"Enter a number, 0 to quit: ";
    cin>>num_input;
    while (num_input != 0)
    {
        sum+=num_input;
        cout<<"sum = "<<sum<<endl<<"Enter another number, 0 to quit: ";
        cin>>num_input;
    }
    cout<<"sum = "<<sum<<endl<<"\aBye!"<<endl;

    system("pause");
    return 0;
}