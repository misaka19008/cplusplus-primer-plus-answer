#include<iostream>
#include "header_files/namesp.h"
void other(void);
void another(void);

int main(){
    using debts::Debt;
    using debts::showDebt;

    Debt golf={{"Benny","Goatsniff"},120.0};
    showDebt(golf);
    other();
    another();

    system("pause");
    return 0;
}

void other(void){
    using std::cout;
    using std::endl;
    using namespace debts;
    int i;

    Person dg={"Doodles","Glister"};
    showPerson(dg);
    cout<<endl;
    Debt zippy[3];
    for (i = 0; i < 3; i++) getDebt(zippy[i]);
    for (i = 0; i < 3; i++) showDebt(zippy[i]);
    cout<<"Total debt: $"<<sumDebts(zippy,3)<<endl;
}

void another(void){
    using pers::Person;
    Person collector={"Milo","Rightshift"};
    pers::showPerson(collector);
    std::cout<<std::endl;
}