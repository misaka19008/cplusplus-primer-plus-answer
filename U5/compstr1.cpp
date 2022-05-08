#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char ch;
    char word[5]="?ate";

    for (ch = 'a'; strcmp(word,"mate"); ch++)
    {
        cout<<word<<endl;
        word[0]=ch;
    }
    cout<<"After loop ends, word is "<<word<<"."<<endl;

    system("pause");
    return 0;
}