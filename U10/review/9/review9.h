#ifndef REVIEW9_H_
#define REVIEW9_H_

#include<string>
class Stock
{
private:
    std::string company;
    int shares;
    double share_val;
    double total_val;
    void set_tot() { total_val=shares*share_val; }
public:
    Stock();
    Stock(const std::string & co,long n=0,double pr=0.0);
    ~Stock();
    void buy(long num,double price);
    void sell(long num,double price);
    void update(double price);
    void show()const;
    const Stock & topval(const Stock & s) const;
    int return_num_shares() const { return shares; }
    double return_share_val() const { return share_val; }
    double return_total_val() const { return total_val; }
    const std::string & return_com_name() const { return company; }
};

#endif