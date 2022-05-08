#include<iostream>
#include<string>
using namespace std;
int main(){
    int count=0;
    string words;

    cout<<"Enter words, type \"DONE\" to quit:"<<endl;
    while (words != "DONE")
    {
        count++;
        cin>>words;
        cin.get();
    }
    cout<<"You entered a total "<<count-1<<" words."<<endl;

    system("pause");
    return 0;
}