#include<iostream>
#include<cstdlib>
#include<ctime>
#include "header_files/queue.h"
using std::cin;
using std::cout;
using std::endl;
using std::ios_base;
const int MIN_PER_HR=60;    // 常量，一小时的秒数
bool isNewCustomer(double x);

int main(){
    int qs;                 // 队列最大长度
    Item temp;
    int hours;              // 模拟时间
    long cyclelimit;        // 模拟时间转秒数，用于循环
    double perhour;         // 平均1小时来多少客户
    double min_per_cust;    // 平均多少分钟来一个客户，用于模拟
    long turnaways=0;       // 达到队列最大长度后离开的客户
    long customers=0;
    long served=0;
    long sum_line=0;
    int wait_time=0;        // 当前客户占用的时间计数器
    long line_wait=0;       // 所有客户占用的总时间
    std::srand(std::time(0));

    cout<<"Case Study: Bank of Heather Automatic Teller"<<endl;
    cout<<"Enter maximum size of queue: ";
    cin>>qs;
    Queue line(qs);
    cout<<"Enter the number of simulation hours: ";
    cin>>hours;
    cyclelimit=MIN_PER_HR*hours;

    cout<<"Enter the average number of customers per hour: ";
    cin>>perhour;
    min_per_cust=MIN_PER_HR/perhour;
    for (int cycle = 0; cycle < cyclelimit; cycle++)
    {
        if (isNewCustomer(min_per_cust))
        {
            if (line.isfull()) turnaways++;
            else
            {
                customers++;
                temp.set(cycle);
                line.enqueue(temp);
            }
        }
        if (wait_time <= 0 && !line.isempty())
        {
            line.dequeue(temp);
            wait_time=temp.ptime();
            line_wait+=cycle-temp.when();       // 求当前客户占用的时间，并加进总时间
            served++;
        }
        if (wait_time > 0) wait_time--;
        sum_line+=line.queuecount();
    }
    
    if (customers > 0)
    {
        cout<<"Customers accepted: "<<customers<<endl;
        cout<<" Customers served: "<<served<<endl;
        cout<<" Turnaways: "<<turnaways<<endl;
        cout<<" Average queue size: ";
        cout.precision(2);
        cout.setf(ios_base::fixed,ios_base::floatfield);
        cout<<(double)sum_line/cyclelimit<<endl;
        cout<<" Average wait time: "<<(double)line_wait/served<<endl;
    }
    else cout<<"No customers!"<<endl;

    system("pause");
    return 0;
}

bool isNewCustomer(double x){
    return (std::rand()*x/RAND_MAX < 1);
}