#include<iostream>
using namespace std;
void n_char(char,int);
int main(){
    char ch;
    int times;

    cout<<"Enter a character, \"q\" to quit: ";
    cin>>ch;
    while (ch != 'q')
    {
        cout<<"Enter a integer: ";
        cin>>times;
        n_char(ch,times);
        cout<<"Enter another character or press the q-key to quit: ";
        cin>>ch;
    }
    cout<<"The value of times is "<<times<<"."<<endl;
    cout<<"Bye!"<<endl;

    system("pause");
    return 0;
}

void n_char(char c,int n){
    while (n-- > 0)
    {
        cout<<c;
    }
    cout<<endl;
}