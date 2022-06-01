#include<iostream>
#include "header_files/mytime3.h"
using std::cout;
using std::endl;

int main(){
    Time aida(3,35);
    Time tosca(2,48);
    Time temp;

    cout<<"Aida and Tosca:"<<endl;
    cout<<aida<<"; "<<tosca<<endl;
    temp=aida+tosca;
    cout<<"Aida + Tosca: "<<temp<<endl;
    temp=aida*1.17;
    cout<<"Aida * 1.17: "<<temp<<endl;
    cout<<"10.0 * Tosca:"<<10.0*tosca<<endl;

    system("pause");
    return 0;
}