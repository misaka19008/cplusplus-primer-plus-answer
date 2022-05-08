#include<iostream>
using namespace std;
struct CandyBar
{
    char * name;
    double weight;
    int cal;
};

void showInfo(const CandyBar & info_of_candy);
void setValue(CandyBar & bar,char * name_of_candy="Millennium Munch",double weight_of_candy=2.85,int cal_of_candy=350);

int main(){
    char * name="White Rabbit";
    double weight=3.5;
    int cal=150;
    CandyBar data_of_candy;

    setValue(data_of_candy);
    showInfo(data_of_candy);
    setValue(data_of_candy,name,weight,cal);
    showInfo(data_of_candy);

    system("pause");
    return 0;
}

void setValue(CandyBar & bar,char * name_of_candy,double weight_of_candy,int cal_of_candy){
    bar.name=name_of_candy;
    bar.weight=weight_of_candy;
    bar.cal=cal_of_candy;
}

void showInfo(const CandyBar & info_of_candy){
    cout<<"Info:"<<endl;
    cout<<"Brand: "<<info_of_candy.name<<endl;
    cout<<"Weight: "<<info_of_candy.weight<<endl;
    cout<<"Calories: "<<info_of_candy.cal<<endl;
    cout<<endl<<endl;
}