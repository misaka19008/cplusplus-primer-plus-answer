#include<iostream>
using namespace std;
unsigned int c_in_str(const char *,char);
int main(){
    unsigned int ms;
    unsigned int us;
    char mmm[15]="minimum";
    char * wail="ululate";

    ms=c_in_str(mmm,'m');
    us=c_in_str(wail,'u');
    cout<<ms<<" m characters in "<<mmm<<endl;
    cout<<us<<" u characters in "<<wail<<endl;

    system("pause");
    return 0;
}

unsigned int c_in_str(const char * str,char ch){
    unsigned int count=0;

    while (*str)
    {
        if (*str == ch)
        {
            count++;
        }
        str++;
    }
    return count;
}