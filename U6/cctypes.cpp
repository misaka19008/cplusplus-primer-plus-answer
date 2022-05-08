#include<iostream>
#include<cctype>
using namespace std;
int main(){
    char ch;
    int whitespace=0;
    int digits=0;
    int chars=0;
    int puncts=0;
    int others=0;

    cout<<"Enter text for analysis, and type \"@\" to terminate input:"<<endl;
    cin.get(ch);
    while (ch != '@')
    {
        if (isalpha(ch))
            chars++;
        else if (isspace(ch))
            whitespace++;
        else if (isdigit(ch))
            digits++;
        else if (ispunct(ch))
            puncts++;
        else
            others++;
        cin.get(ch);
    }
    cout<<chars<<" letters, "<<whitespace<<" whitespaces, "
    <<digits<<" digits, "<<puncts<<" punctuations, "<<others<<" others."<<endl;

    system("pause");
    return 0;
}