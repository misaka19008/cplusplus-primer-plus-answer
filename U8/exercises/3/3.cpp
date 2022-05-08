#include<iostream>
#include<cctype>
#include<cstring>
using namespace std;
inline void strToUpper(string & str) { for (int i = 0; i < str.size(); i++) str[i]=toupper(str[i]); }
int main(){
    string str;

    cout<<"Enter a string (q to quit): ";
    getline(cin,str);
    while (str != "q")
    {
        strToUpper(str);
        cout<<str<<endl;
        cout<<"Next string (q to quit): ";
        getline(cin,str);
    }
    cout<<"Done!"<<endl;

    system("pause");
    return 0;
}