#include<iostream>
using namespace std;
const char * qualify[4]={
    "10000-meter race",
    "mud tug-of-war",
    "masters canoe jousting",
    "pie-throwing festival"
};
int main(){
    int age;
    int index;

    cout<<"Enter your age: ";
    cin>>age;

    if (age >= 0 && age < 18)
    {
        index=3;
    }
    else if (age >= 18 && age < 35)
    {
        index=0;
    }
    else if (age >= 35 && age < 50)
    {
        index=1;
    }
    else if (age >=50 && age < 65)
    {
        index=2;
    }
    else if (age >= 65)
    {
        cout<<"There's no activities for you!"<<endl;
        system("pause");
        exit(0);
    }
    else
    {
        cout<<"Input error!"<<endl;
        system("pause");
        exit(0);
    }
    cout<<"You qualify for the "<<qualify[index]<<"."<<endl;

    system("pause");
    return 0;
}