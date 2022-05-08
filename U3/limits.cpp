#include<iostream>
#include<climits>

using namespace std;

int main(){
    int n_int=INT_MAX;
    short n_short=SHRT_MAX;
    long n_long=LONG_MAX;
    long long n_llong=LONG_LONG_MAX;

    cout<<"int is "<<sizeof(int)<<" bytes."<<endl;
    cout<<"short is "<<sizeof n_short<<" bytes"<<endl;
    cout<<"long is "<<sizeof n_long<<" bytes."<<endl;
    cout<<"long long is "<<sizeof n_llong<<" bytes"<<endl<<endl<<endl<<endl;

    cout<<"Maximum values:"<<endl;
    cout<<"Int: "<<n_int<<endl;
    cout<<"Short: "<<n_short<<endl;
    cout<<"Long: "<<n_long<<endl;
    cout<<"Long long: "<<n_llong<<endl<<endl<<endl<<endl;

    cout<<"Minimum values:"<<endl;
    cout<<"Int: "<<INT_MIN<<endl;
    cout<<"Bits per byte: "<<CHAR_BIT<<endl;

    system("pause");
    return 0;
}