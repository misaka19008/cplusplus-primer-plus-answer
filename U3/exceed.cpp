#include<iostream>
#include<climits>

const int Zero=0;

using namespace std;

int main(){
    short sam=SHRT_MAX;
    unsigned short sue=sam;

    cout<<"Sam has "<<sam<<" dollars and Sue has "<<sue<<" dollars deposited."<<endl<<"Add $1 to each account."<<endl;
    sam=sam+1;
    sue=sue+1;
    cout<<"Now Sam has "<<sam<<" dollars and Sue has "<<sue<<" dollars deposited.\nPOOR SAM!!!"<<endl;
    sam=Zero;
    sue=Zero;
    cout<<"Sam has "<<sam<<" dollars and Sue has "<<sue<<" dollars deposited."<<endl;
    cout<<"Take $1 from each account."<<endl;
    sam=sam-1;
    sue=sue-1;
    cout<<"Sam has "<<sam<<" dollars and Sue has "<<sue<<" dollars deposited."<<endl;
    cout<<"LUCKY SUE!!!"<<endl;
    
    system("pause");
    return 0;
}