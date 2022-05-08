#include<iostream>
using namespace std;
inline void iquote(int num) { cout<<"\""<<num<<"\""<<endl; }
inline void iquote(double num_d) { cout<<"\""<<num_d<<"\""<<endl; }
inline void iquote(string str) { cout<<"\""<<str<<"\""<<endl; }
int main(){
    iquote(2233);
    iquote(22.33);
    iquote("I like Zhao Lingyue.");

    system("pause");
    return 0;
}