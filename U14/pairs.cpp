#include<iostream>
#include<string>
using std::cout;
using std::endl;
using std::string;

template <class T1,class T2>
class Pair
{
private:
    T1 a;
    T2 b;
public:
    T1 & first();
    T2 & second();
    T1 first() const { return a; }
    T2 second() const { return b; }
    Pair() {}
    Pair(const T1 & aval,const T2 & bval) : a(aval),b(bval) {}
};

template <class T1,class T2>
T1 & Pair<T1,T2>::first() {
    return a;
}

template <class T1,class T2>
T2 & Pair<T1,T2>::second() {
    return b;
}

int main(){
    int joints;
    Pair<string,int> ratings[4]=
    {
        Pair<string,int>("The Purpled Duck",5),
        Pair<string,int>("Jaquie's Frisco Al Fresco",5),
        Pair<string,int>("Cafe Souffle",5),
        Pair<string,int>("Bertie's Eats",3)
    };

    joints=sizeof(ratings)/sizeof(Pair<string,int>);
    cout<<"Rating:\t Eatery"<<endl;
    for (int i = 0; i < joints; i++) cout<<ratings[i].second()<<":\t"<<ratings[i].first()<<endl;
    cout<<"Oops! Revised rating:"<<endl;
    ratings[3].first()="Bertie's Fab Eats";
    ratings[3].second()=6;
    cout<<ratings[3].second()<<":\t"<<ratings[3].first()<<endl;

    system("pause");
    return 0;
}