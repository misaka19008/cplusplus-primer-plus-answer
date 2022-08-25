#include<iostream>
using std::cout;
using std::endl;

template <typename T> void counts();
template <typename T> void report(T & hf);

template <typename TT>
class HasFriendT
{
private:
    TT item;
    static int ct;
public:
    HasFriendT(const TT & i) : item(i) { ct++; }
    ~HasFriendT() { ct--; }
    friend void counts<TT>();
    friend void report<>(HasFriendT<TT> & hf);
};

template <typename T>
int HasFriendT<T>::ct=0;

template <typename T>
void counts(){
    cout<<"Template size: "<<sizeof(HasFriendT<T>)<<endl;
    cout<<"Template counts(): "<<HasFriendT<T>::ct<<endl;
}

template <typename T>
void report(T & hf){
    cout<<hf.item<<endl;
}

int main(){
    counts<int>();
    HasFriendT<int> hfi1(10);
    HasFriendT<int> hfi2(20);
    HasFriendT<double> hfdb(10.5);

    report(hfi1);
    report(hfi2);
    report(hfdb);
    cout<<"counts<int>() output:"<<endl;
    counts<int>();
    cout<<"counts<double>() output:"<<endl;
    counts<int>();

    system("pause");
    return 0;
}