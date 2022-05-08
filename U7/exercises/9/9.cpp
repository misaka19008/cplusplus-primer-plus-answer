#include<iostream>
using namespace std;
const int SIZE=80;
struct student
{
    char fullname[SIZE];
    char hobby[SIZE];
    int ooplevel;
};

int getinfo(student[],int);
void display1(student);
void display2(const student*);
void display3(const student[],int);

int main(){
    int entered=0;
    int class_size=0;
    
    cout<<"Enter class size: ";
    cin>>class_size;
    while (cin.get() != '\n')
    {
        continue;
    }
    student * ptr_stu=new student[class_size];
    entered=getinfo(ptr_stu,class_size);
    cout<<"Display 1/2:"<<endl;
    for (int i = 0; i < entered; i++)
    {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    cout<<endl<<"Display 3:"<<endl;
    display3(ptr_stu,entered);
    delete [] ptr_stu;
    cout<<"Done!"<<endl;

    system("pause");
    return 0;
}

int getinfo(student pa[],int n){
    int i;
    cout<<"Enter information about your students:"<<endl;
    for (i = 0; i < n; i++)
    {
        cout<<"Student #"<<i+1<<endl;
        cout<<"Fullname: ";
        cin.getline(pa[i].fullname,SIZE);
        cout<<"Hobby: ";
        cin.getline(pa[i].hobby,SIZE);
        cout<<"OOPLevel: ";
        cin>>pa[i].ooplevel;
        cin.get();
    }
    cout<<endl;
    return i;
}

void display1(student st){
    cout<<"Fullname: "<<st.fullname<<"\t";
    cout<<"Hobby: "<<st.hobby<<"\t";
    cout<<"OOPLevel: "<<st.ooplevel<<"\t"<<endl;
}

void display2(const student * ps){
    cout<<"Fullname: "<<ps->fullname<<"\t";
    cout<<"Hobby: "<<ps->hobby<<"\t";
    cout<<"OOPLevel: "<<ps->ooplevel<<"\t"<<endl;
}

void display3(const student pa[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<"Fullname: "<<pa[i].fullname<<"\t";
        cout<<"Hobby: "<<pa[i].hobby<<"\t";
        cout<<"OOPLevel: "<<pa[i].ooplevel<<endl;
    }
}