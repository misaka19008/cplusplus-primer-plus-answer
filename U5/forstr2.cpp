#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int i;
    int j;
    char temp;
    string word;

    cout<<"Enter a word: ";
    cin>>word;
    for (j = 0, i = word.size()-1; j < i; --i, j++)
    {
        temp=word[i];
        word[i]=word[j];
        word[j]=temp;
    }
    cout<<word<<endl<<"Done!"<<endl;
    
    return 0;
    system("pause");
}