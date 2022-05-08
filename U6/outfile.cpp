#include<iostream>
#include<fstream>
using namespace std;
int main(){
    int year;
    char author[90];
    char cartoonName[150];

    // Get information of cartoon.
    cout<<"Enter the name of cartoon: ";
    cin.getline(cartoonName,151);
    cout<<"Enter the year of publication: ";
    cin>>year;
    cin.get();
    cout<<"Enter author name: ";
    cin.getline(author,91);

    // Display information of cartoon.
    cout<<"Name: "<<cartoonName<<endl;
    cout<<"Year: "<<year<<endl;
    cout<<"Author: "<<author<<endl;

    // Create ofstream object.
    ofstream outFile;
    outFile.open(".\\outputs\\output_outfile-cpp.txt");

    // Write information to file.
    outFile<<"Name: "<<cartoonName<<endl;
    outFile<<"Publication year: "<<year<<endl;
    outFile<<"Author: "<<author<<endl;
    outFile<<endl;

    // Delete ofstream object.
    outFile.close();

    system("pause");
    return 0;
}