#include<iostream>
#include<cstdlib>
#include<ctime>
#include "exec5.h"
using std::cin;
using std::cout;
using std::endl;
using std::ios_base;
const int MIN_PER_HR=60;    // 常量，一小时的秒数
bool isNewCustomer(double x);
bool simulator(int cuArrivePerHour);

int main(){
    int num_customer=0;
    bool isSuccess=false;

    do
    {
        ++num_customer;
        isSuccess=simulator(num_customer);
    } while (isSuccess == true);
    cout<<"CustomerPerHour = "<<num_customer<<endl;

    system("pause");
    return 0;
}

bool isNewCustomer(double x){
    return (std::rand()*x/RAND_MAX < 1);
}

bool simulator(int cuArrivePerHour){
    int qs=10;                 // 队列最大长度
    Item temp;
    int hours=100;              // 模拟时间
    long cyclelimit;        // 模拟时间转秒数，用于循环
    double perhour;         // 平均1小时来多少客户
    double min_per_cust;    // 平均多少分钟来一个客户，用于模拟
    long customers=0;
    long served=0;
    long sum_line=0;
    int wait_time=0;        // 当前客户占用的时间计数器
    long line_wait=0;       // 所有客户占用的总时间
    std::srand(std::time(0));

    Queue line(qs);
    cyclelimit=MIN_PER_HR*hours;
    perhour=cuArrivePerHour;
    min_per_cust=MIN_PER_HR/perhour;
    for (int cycle = 0; cycle < cyclelimit; cycle++)
    {
        if (isNewCustomer(min_per_cust))
        {
            if (line.isfull()) continue;
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
        if (((double)line_wait/served) >= 0.016) return true;
        else return false;
    }
    else return false;
}