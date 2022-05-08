#include<iostream>
using namespace std;
const int ARSIZE=80;
int main(){
    int spaces=0;
    char line[ARSIZE];

    cout<<"Enter a line of text:"<<endl;
    cin.get(line,ARSIZE);
    cout<<endl<<"Complete line:"<<endl<<line<<endl<<endl;
    cout<<"Line through first period:"<<endl;
    for (int i = 0; line[i] != '\0'; i++)
    {
        cout<<line[i];
        if (line[i] == '.' || line[i] == '!')
        {
            break;
        }
        if (line[i] != ' ')
        {
            continue;
        }
        spaces++;
    }
    cout<<endl<<endl;
    cout<<spaces<<" spaces."<<endl;

    system("pause");
    return 0;
}