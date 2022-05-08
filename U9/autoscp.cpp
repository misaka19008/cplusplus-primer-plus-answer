#include<iostream>
using namespace std;
void oil(int x);
int main(){
    int texas=31;
    int years=2011;

    cout<<"In main(), texas = "<<texas<<", &texas = "<<&texas<<endl;
    cout<<"In main(), years = "<<years<<", &years = "<<&years<<endl;
    oil(texas);
    cout<<"In main(), texas = "<<texas<<", &texas = "<<&texas<<endl;
    cout<<"In main(), years = "<<years<<", &years = "<<&years<<endl;

    system("pause");
    return 0;
}

void oil(int x){
    int texas=5;

    cout<<"In oil(), texas = "<<texas<<", &texas = "<<&texas<<endl;
    cout<<"In oil(), x = "<<x<<", &x = "<<&x<<endl;
    {
        int texas=113;
        cout<<"In block of oil(), texas = "<<texas<<", &texas = "<<&texas<<endl;
            cout<<"in block of oil(), x = "<<x<<", &x = ";
        cout<<&x<<endl;
    }
    cout<<"Post-block texas = "<<texas<<", &texas = "<<&texas<<endl;
}