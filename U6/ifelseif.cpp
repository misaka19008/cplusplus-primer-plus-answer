#include<iostream>
using namespace std;
const int ANSWER=2233;
int main(){
    int n;

    cout<<"Enter a number in the range 1-100000 to find my favorite number: ";
    do
    {
        cin>>n;
        if (n < ANSWER)
        {
            cout<<"Too low, try again: ";
        }
        else if (n > ANSWER)
        {
            cout<<"Too high, try again: ";
        }
        else
        {
            cout<<ANSWER<<" is right!"<<endl;
        }
        
    } while (n != ANSWER);
    
    system("pause");
    return 0;
}