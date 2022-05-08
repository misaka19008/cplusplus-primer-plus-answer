#include<iostream>
#include<cctype>
using namespace std;
int main(){
    char ch;

    cout<<"Enter a sentence:"<<endl;
    cin.get(ch);
    while (ch != '@')
    {
        if (islower(ch))
        {
            ch=toupper(ch);
        }
        else if (isupper(ch))
        {
            ch=tolower(ch);
        }
        else if (isdigit(ch))
        {
            cin.get(ch);
            continue;
        }
        cout<<ch;
        cin.get(ch);
    }
    cout<<endl<<"Done!"<<endl;

    system("pause");
    return 0;
}