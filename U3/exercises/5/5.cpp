#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    long long popu_world;
    long long popu_China;
    double result;
    cout.setf(ios_base::fixed);

    cout<<"Enter the world's population: ";
    cin>>popu_world;
    cout<<"Enter the population of China: ";
    cin>>popu_China;
    result=(double(popu_China)/double(popu_world))*100;
    cout<<"The population of China is "<<fixed<<setprecision(5)<<result<<"\% of the world population."<<endl;

    system("pause");
    return 0;
}