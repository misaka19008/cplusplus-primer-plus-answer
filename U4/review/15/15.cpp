#include<iostream>
#include<cstring>
using namespace std;
struct myFriend
{
    string name="Zhao Lingyue";
    string sex="Girl";
    int age=15;
    string birth="2006-09-11";
    float weight=58.5;
    float height=176.0;
};
int main(){
    myFriend * zhao=new myFriend;
    cout<<"Name: "<<zhao->name<<endl;
    cout<<"Sex: "<<zhao->sex<<endl;
    cout<<"Age: "<<zhao->age<<endl;
    cout<<"Birthday: "<<zhao->birth<<endl;
    cout<<"Weight: "<<zhao->weight<<endl;
    cout<<"Height: "<<zhao->height<<endl<<endl;
    delete zhao;
    cout<<"Memory has been freed!"<<endl;

    system("pause");
    return 0;
}