#include<iostream>
using namespace std;
int main(){
    char ch;
    int num_space;
    int total;

    cout<<"Enter a sentence, \".\" to quit:"<<endl;
    cin.get(ch);
    while (ch != '.')
    {
        if (ch == ' ')
        {
            ++num_space;
        }
        ++total;
        cin.get(ch);
    }
    cout<<num_space<<" spaces, "<<total<<" characters total in sentence."<<endl;

    system("pause");
    return 0;
}