#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;
const int NAME_SIZE=200;
int main(){
    double value;
    int count=0.0;
    double sum=0.0;
    char fileName[NAME_SIZE];
    
    // Create file object and open the file.
    cout<<"Enter the name of data file: ";
    cin.getline(fileName,NAME_SIZE+1);
    ifstream inFile;
    inFile.open(fileName);
    if (!inFile.is_open())
    {
        cout<<"sumafile: Error: File not found."<<endl;
        exit(EXIT_FAILURE);
    }
    
    // Read values in the file.
    inFile>>value;
    while (inFile.good())
    {
        ++count;
        sum+=value;
        inFile>>value;
    }
    
    // Catch except.
    if (inFile.eof())
    {
        cout<<"EOF reached."<<endl;
    }
    else if (inFile.fail())
    {
        cout<<"sumafile: Error: Input terminated by data mismatch."<<endl;
    }
    else
    {
        cout<<"sumafile: Error: Input terminated for unknown reason."<<endl;
    }
    
    // Display result.
    if (count == 0)
    {
        cout<<"No data processed."<<endl;
    }
    else
    {
        cout<<"Item read: "<<count<<endl;
        cout<<"Sum: "<<sum<<endl;
        cout<<"Average: "<<sum/count<<endl;
    }
    
    inFile.close();         // Delete file object.
    
    system("pause");
    return 0;
}