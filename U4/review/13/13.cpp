#include<iostream>
#include<vector>
using namespace std;
int main(){
    int len;
    cout<<"Please enter the array length: ";
    cin>>len;
    int * num_array=new int[len];
    cout<<"Created successfully! Started to free the memory..."<<endl;
    _sleep(5000);
    delete [] num_array;
    cout<<"\a"<<"Done!"<<endl;
    system("pause");
    return 0;
}