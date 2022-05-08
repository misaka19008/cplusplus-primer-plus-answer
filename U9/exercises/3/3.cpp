#include<iostream>
#include<cstring>
using namespace std;
struct chaff
{
    char dross[20];
    int slag;
};
const long long BUFFER_SIZE=2048;
const int NUM=2;
char buffer[BUFFER_SIZE];

int main(){
    chaff * chaff_data=new (buffer) chaff[NUM];
    strcpy(chaff_data[0].dross,"AAAAAAAAAAAAAAAAAA");
    chaff_data[0].slag=2147483646;
    strcpy(chaff_data[1].dross,"BBBBBBBBBBBBBBBBBB");
    chaff_data[1].slag=2147483645;

    cout<<"Array \"chaff_data\", heap address "<<chaff_data<<", static address "<<(void *)buffer<<endl;
    for (int i = 0; i < NUM; i++)
    {
        cout<<"#"<<i+1<<"   dross = "<<chaff_data[i].dross<<", slag = "<<chaff_data[i].slag<<endl;
    }
    cout<<"Done!"<<endl;

    system("pause");
    return 0;
}