#ifndef REVIEW5_H_
#define REVIEW5_H_

class Bank_acc_info
{
private:
    std::string name="Null";
    long long account_id=000000000;
    long double total=0.0;
    void set_total(long double money_num) { total+=money_num; }
public:
    bank_acc_info();
    bank_acc_info(const std::string n,long long acc_id,long double tot);
    void acc_in(long double money_in);
    void acc_out(long double money_out);
    void acc_show();
    ~bank_acc_info();
};

#endif