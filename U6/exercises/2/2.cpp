#include<iostream>
using namespace std;
const int ARSIZE=10;
int main(){
    int i=0;
    double average=0.0;
    double donation=0.0;
    double *num_array=new double [ARSIZE];

    // Get data.
    cout<<"Enter 10 numbers:"<<endl;
    cout<<"Number #1: ";
    while (i < ARSIZE && cin>>num_array[i])
    {
        if (++i < ARSIZE)
        {
            cout<<"Number #"<<i+1<<": ";
        }
        
    }
    
    // Display result.
    for (int j = 0; j < ARSIZE; j++)
    {
        double cache;
        cache+=num_array[j];
        average=cache/ARSIZE;
    }
    cout<<"average = "<<average<<endl;
    for (int k = 0; k < ARSIZE; k++)
    {
        if (num_array[k] > average)
        {
            cout<<num_array[k]<<" ";
        }
        
    }
    cout<<"is bigger than average."<<endl;
    delete [] num_array;

    system("pause");
    return 0;
}