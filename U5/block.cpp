#include<iostream>
using namespace std;
int main(){
    double number;
    double sum=0.00;
    
    cout<<"The Amazing Accounto will sum and average five numbers for you."<<endl;
    cout<<"Please enter five numbers: "<<endl;
    for (int i = 1; i <= 5; i++)
    {
        cout<<"Value "<<i<<": ";
        cin>>number;
        sum+=number;
    }
    cout<<"Five exquisite choices inneed! They sum to "<<sum<<" and average to "<<sum/5<<"."<<endl;
    cout<<"The Amazing Accounto bids you adieu!"<<endl;

    system("pause");
    return 0;
}