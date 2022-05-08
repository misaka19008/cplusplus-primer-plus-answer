#include<iostream>
#include<cctype>
using namespace std;
int main(){
    char ch;
    int count_v=0;
    int count_c=0;
    int count_o=0;

    cout<<"Enter words, \"q\" to quit:"<<endl;
    cin.get(ch);
    while (ch != 'q')
    {
        if (ch == ' ')
        {
            cin.get(ch);
        }
        else if (isalpha(ch))
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch =='o' || ch == 'u' || ch == 'A' || ch =='E' || ch == 'I' || ch == 'O' || ch == 'U')
            {
                count_v++;
            }
            else
            {
                count_c++;
            } 
        }
        else
        {
            count_o++;
        }
        cin.get(ch);
    }
    cout<<endl;
    cout<<count_v<<" words beginning with vowels."<<endl;
    cout<<count_c<<" words beginning with consonants."<<endl;
    cout<<count_o<<" others."<<endl;

    system("pause");
    return 0;
}