#include<iostream>
#include<fstream>
using namespace std;
int main(){
    char ch;
    int num;
    ifstream inFile;
    string fileName;

    cout<<"Enter filename: ";
    cin>>fileName;
    inFile.open(fileName);
    if (!inFile.is_open())
    {
        cout<<"Error: File not found!"<<endl;
        exit(EXIT_FAILURE);
    }
    inFile.get(ch);
    while (inFile.good())
    {
        ++num;
        inFile.get(ch);
    }
    if (inFile.eof())
    {
        cout<<"End of File!"<<endl;
        cout<<"This file has "<<num<<" chars."<<endl;
    }
    else
    {
        cout<<"Error: Input terminated!"<<endl;
        exit(EXIT_FAILURE);
    }
    inFile.close();
    
    system("pause");
    return 0;
}