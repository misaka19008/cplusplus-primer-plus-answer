#include<iostream>
using namespace std;
const int ARSIZE=15;
void fill_array(double[],const int);
void show_array(double[],const int);
void reverse_array(double[],const int);
int main(){
    double num_arr[ARSIZE];

    fill_array(num_arr,ARSIZE);
    show_array(num_arr,ARSIZE);
    reverse_array(num_arr,ARSIZE);
    cout<<endl<<"Reversed:"<<endl;
    show_array(num_arr,ARSIZE);

    system("pause");
    return 0;
}

void fill_array(double arr[],const int arrlength){
    int i=0;
    cout<<"Enter "<<arrlength<<" values:"<<endl;
    do
    {
        cout<<"Value #"<<i+1<<": ";
        if (cin>>arr[i])
        {
            i++;
            continue;
        }
        break;
    } while (i < arrlength);
    cout<<endl<<i<<" number(s) entered:"<<endl;
}

void show_array(double arr[],const int arrlength){
    for (int i = 0; i < arrlength; i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}

void reverse_array(double arr[],const int arrlength){
    int i;
    int j;
    double temp=0.0;
    for (i = arrlength-1, j = 0; i < arrlength-1, j < i; --i, ++j)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}