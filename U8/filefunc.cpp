#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;
const int LIMIT=5;
void file_it(ostream&,double,const double[],int);
int main(){
    double eps[LIMIT];
    double objective;
    ofstream fout;
    const char * fileName=".\\files\\output_filefunc-cpp.txt";

    fout.open(fileName);
    if (!fout.is_open())
    {
        cout<<"Error: Cannot open "<<fileName<<" !"<<endl;
        cout<<"Quiting..."<<endl;
        exit(EXIT_FAILURE);
    }
    cout<<"Enter the focal length of your telescope objective in mm: ";
    cin>>objective;
    cout<<"Enter the focal lengths, in mm, of "<<LIMIT<<" eyepieces:"<<endl;
    for (int i = 0; i < LIMIT; i++)
    {
        cout<<"Eyepiece #"<<i+1<<": ";
        cin>>eps[i];
    }
    file_it(fout,objective,eps,LIMIT);
    file_it(cout,objective,eps,LIMIT);

    system("pause");
    return 0;
}

void file_it(ostream & os,double fo,const double fe[],int n){
    ios_base::fmtflags initial;
    initial=os.setf(ios_base::fixed);
    os.precision(0);
    os<<"Focal length of objective: "<<fo<<" mm"<<endl;
    os.setf(ios::showpoint);
    os.precision(1);
    os.width(12);
    os<<"f.l. eyepiece";
    os.width(15);
    os<<"magnification"<<endl;
    for (int i = 0; i < n; i++)
    {
        os.width(12);
        os<<fe[i];
        os.width(15);
        os<<int(fo/fe[i]+0.5)<<endl;
    }
    os.setf(initial);
}