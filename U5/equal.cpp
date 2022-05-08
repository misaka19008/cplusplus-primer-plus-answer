#include<iostream>
using namespace std;
int main(){
    int i;
    int num_list[10]={20,20,20,20,20,19,20,18,20,20};

    cout<<"Doing it right:"<<endl;
    for (i = 0; num_list[i]==20; i++)
    {
        cout<<"num_list "<<i<<" is 20."<<endl;
    }
    cout<<"Doing it dangerously wrong:"<<endl;
    for (i = 0; num_list[i]=20; i++)
    {
        cout<<"num_list "<<i<<" is 20."<<endl;
    }
    
    system("pause");
    return 0;
}