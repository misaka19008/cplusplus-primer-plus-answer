#include<iostream>
#include<cstdlib>
#include<ctime>
#include "exec6.h"
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
    cout<<"Customer per hour = "<<num_customer<<endl;

    system("pause");
    return 0;
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
    int wait_time_1=0;        // line1当前客户占用的时间计数器
    int wait_time_2=0;        // line2当前客户占用的时间计数器
    long line_wait=0;       // 所有客户占用的总时间
    std::srand(std::time(0));

    Queue line1(qs);
    Queue line2(qs);
    cyclelimit=MIN_PER_HR*hours;
    perhour=cuArrivePerHour;
    min_per_cust=MIN_PER_HR/perhour;
    for (int cycle = 0; cycle < cyclelimit; cycle++)
    {
        if (isNewCustomer(min_per_cust))
        {
            if (line1.isfull())
            {
                if (line2.isfull()) continue;
                else
                {
                    customers++;
                    temp.set(cycle);
                    line2.enqueue(temp);
                }
            }
            else if (line1.queuecount() < line2.queuecount())
            {
                customers++;
                temp.set(cycle);
                line1.enqueue(temp);
            }
            else if (line2.isfull()) continue;
            else
            {
                customers++;
                temp.set(cycle);
                line2.enqueue(temp);
            }
        }
        if (wait_time_1 <= 0 && !line1.isempty())
        {
            line1.dequeue(temp);
            wait_time_1=temp.ptime();
            line_wait+=cycle-temp.when();       // 求当前客户占用的时间，并加进总时间
            served++;
        }
        if (wait_time_2 <= 0 && !line2.isempty())
        {
            line2.dequeue(temp);
            wait_time_2=temp.ptime();
            line_wait+=cycle-temp.when();
            served++;
        }
        if (wait_time_1 > 0) wait_time_1--;
        if (wait_time_2 > 0) wait_time_2--;
        sum_line=line1.queuecount()+line2.queuecount();
    }
    
    if (customers > 0)
    {
        if (((double)line_wait/served) >= 0.016) return true;
        else return false;
    }
    else return false;
}

bool isNewCustomer(double x){
    return (std::rand()*x/RAND_MAX < 1);
}