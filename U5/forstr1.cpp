#include<iostream>
#include<cstring>
using namespace std;
int main(){
    string word;

    cout<<"Enter a word: ";
    cin>>word;
    for (int i = word.size()-1; i >= 0; i--)
    {
        cout<<word[i];
    }
    cout<<endl<<"Bye!"<<endl;

    system("pause");
    return 0;
}