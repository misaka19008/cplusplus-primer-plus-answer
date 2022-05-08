#include<iostream>
#include<iomanip>
using namespace std;
double convert(double,double,double);
int main(){
    double degrees;
    double minutes;
    double seconds;
    double doubleDeg;
    cout.setf(ios_base::fixed);

    //输入数据
    cout<<"Enter a latitude in degrees, minutes, and seconds:"<<endl;
    cout<<"First, enter the degrees: ";
    cin>>degrees;
    cout<<"Next, enter the minutes of arc: ";
    cin>>minutes;
    cout<<"Finally, enter the seconds of arc: ";
    cin>>seconds;

    //doubleDeg=((60*minutes+seconds)/3600)+double(degrees);
    doubleDeg=convert(degrees,minutes,seconds);             //调用计算函数

    //输出结果
    cout<<fixed<<setprecision(0)
    <<degrees<<" degrees, "<<fixed<<setprecision(0)
    <<minutes<<" minutes, "<<fixed<<setprecision(0)
    <<seconds<<" seconds = "<<fixed<<setprecision(4)
    <<doubleDeg<<" degrees."<<endl;

    system("pause");
    return 0;
}

double convert(double deg,double min,double sec){
    double result;
    result=((60*min+sec)/3600)+deg;                         //计算秒数，变为小数格式后，加上度数
    return result;
}