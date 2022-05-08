#include<iostream>
using namespace std;
int main(){
    char ch='M';
    int i=ch;

    cout<<"The ASCII code for "<<ch<<" is "<<i<<endl;
    cout<<"Add one to the character code:"<<endl;
    ch=ch+1;
    i=ch;
    cout<<"The ASCII code for "<<ch<<" is "<<i<<endl;
    cout<<"Displaying char ch using cout.put(): ";
    cout.put(ch);
    cout.put('!');
    cout<<endl<<"Done!"<<endl;

    system("pause");
    return 0;
}