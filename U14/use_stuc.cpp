#include<iostream>
#include "header_files/studentc.h"
using std::cin;
using std::cout;
using std::endl;
const int pupils=3;
const int quizzes=5;
void set(Student & sa,int n);

int main(){
    int i;
    Student ada[pupils]={Student(quizzes),Student(quizzes),Student(quizzes)};

    for (i = 0; i < pupils; ++i) set(ada[i],quizzes);
    cout<<endl<<"Student List:"<<endl;
    for (i = 0; i < pupils; ++i) cout<<ada[i].getName()<<endl;
    cout<<endl<<"Results: ";
    for (i = 0; i < pupils; ++i)
    {
        cout<<endl<<ada[i];
        cout<<"Average: "<<ada[i].average()<<endl;
    }
    cout<<"Done!"<<endl;

    system("pause");
    return 0;
}

void set(Student & sa,int n){
    double cache;
    cout<<"Please enter the student's name: ";
    getline(cin,sa);
    cout<<"Please enter "<<n<<" quiz scores:"<<endl;
    for (int i = 0; i < n; i++) {
        cin>>cache;
        sa[i]=cache;
    }
    while (cin.get() != '\n') continue;
}