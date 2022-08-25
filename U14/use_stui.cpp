#include<iostream>
#include "header_files/studenti.h"
using std::cin;
using std::cout;
using std::endl;
const int pupils=3;
const int quizzes=5;
void set(Student & sa,int n);

int main(){
    Student ada[pupils]={Student(quizzes),Student(quizzes),Student(quizzes)};
    int i;

    for (i = 0; i < pupils; i++) set(ada[i],quizzes);
    cout<<endl<<"Student List:"<<endl;
    for (i = 0; i < pupils; i++) cout<<ada[i].getName()<<endl;
    cout<<endl<<"Result:";
    for (i = 0; i < pupils; i++)
    {
        cout<<endl<<ada[i];
        cout<<"Average: "<<ada[i].average()<<endl;
    }
    cout<<"Done!"<<endl;

    system("pause");
    return 0;
}

void set(Student & sa,int n){
    cout<<"Please enter the student's name: ";
    getline(cin,sa);
    cout<<"Please enter "<<n<<" quiz scores:"<<endl;
    for (int i = 0; i < n; i++) cin>>sa[i];
    while (cin.get() != '\n') continue;
}