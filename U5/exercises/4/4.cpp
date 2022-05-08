#include<iostream>
using namespace std;
int main(){
    int year_count;
    double cleo_sum=100.00;
    double daphne_sum=100.00;
    
    while ((cleo_sum>daphne_sum) == false)
    {
        daphne_sum+=10.00;
        cleo_sum=cleo_sum+cleo_sum*0.05;
        ++year_count;
    }
    cout<<"In "<<year_count<<" years, Cleo's investment value is "
    <<cleo_sum<<", will exceed Daphne's investment value ("<<daphne_sum<<")."<<endl;

    system("pause");
    return 0;
}