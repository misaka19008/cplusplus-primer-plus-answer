#ifndef EXEC1_H_
#define EXEC1_H_

class Bank_acc_info
{
private:
    std::string name;
    long long account_id;
    double total;
    void set_total(double money_num) { total+=money_num; }
public:
    Bank_acc_info();
    Bank_acc_info(const std::string n,long long acc_id,double tot);
    ~Bank_acc_info();
    void acc_in(double money_in);
    void acc_out(double money_out);
    void acc_show();
};

#endif