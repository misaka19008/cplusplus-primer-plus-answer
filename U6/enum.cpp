#include<iostream>
using namespace std;
enum {red,orange,yellow,green,blue,violet,indigo};
int main(){
    int code;
    cout<<"Enter color code (0-6): ";
    cin>>code;
    while (code >= red && code <= indigo)
    {
        switch (code)
        {
        case red :
            cout<<"Her lips were red."<<endl;
            break;
        case orange :
            cout<<"Her hair was orange."<<endl;
            break;
        case yellow :
            cout<<"Her shoes were yellow."<<endl;
            break;
        case green :
            cout<<"Her nails were green."<<endl;
            break;
        case blue :
            cout<<"Her sweatsuit was blue."<<endl;
            break;
        case violet :
            cout<<"Her eyes were violet."<<endl;
            break;
        case indigo :
            cout<<"Her mood was indigo."<<endl;
            break;
        default:
            break;
        }
        cout<<"Enter color code (0-6): ";
        cin>>code;
    }
    cout<<"That's not a color code, Bye!"<<endl;

    system("pause");
    return 0;
}