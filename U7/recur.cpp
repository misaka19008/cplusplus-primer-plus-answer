#include<iostream>
using namespace std;
void countdown(int);

int main(){
    int num;
    
    cout<<"Enter an integer: ";
    cin>>num;
    countdown(num);

    system("pause");
    return 0;
}

void countdown(int n){
    cout<<"Counting down ... "<<n<<"    (n at "<<&n<<")"<<endl;
    if (n > 0)
    {
        countdown(n-1);
    }
    cout<<n<<": Kaboom!     (n at "<<&n<<")"<<endl;
}