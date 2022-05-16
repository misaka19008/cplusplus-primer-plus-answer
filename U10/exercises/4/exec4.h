#ifndef EXEC4_H_
#define EXEC4_H_

const int QUARTERS=4;
    
    /*
    struct Sales
    {
        double sales[QUARTERS];
        double average;
        double max;
        double min;
    };
    void setSales(Sales & s,const double ar[],int n);
    void setSales(Sales & s);
    void showSales(const Sales & s);
    */

class Sales
{
private:
    double sales[QUARTERS];
    double average;
    double max;
    double min;
public:
    Sales();
    Sales(const double ar[],int n);
    ~Sales();
    void showSales() const;
};

#endif