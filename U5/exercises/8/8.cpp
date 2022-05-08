#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int conut;
    char words[500];

    cout<<"Enter the word, type \"DONE\" to quit:"<<endl;
    while (strcmp("DONE",words) != 0)
    {
        conut++;
        cin>>words;
        cin.get();
    }
    cout<<"You entered a total of "<<conut-1<<" words."<<endl;

    system("pause");
    return 0;
}