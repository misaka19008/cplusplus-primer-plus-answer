#include<iostream>
using namespace std;
struct box
{
    char maker[90];
    float height;
    float width;
    float length;
    float volume;
};

inline void setValue(box & data) { data.volume=data.length*data.width*data.height; }
template <typename T>
T Getmaxvalue(T&a,T&b){
    return a>b?a:b;
}
template <> box Getmaxvalue<box>(box&b1,box&b2);

int main(){
    box max_value;
    box box_1=
    {
        "Zhao Lingyue",
        30,
        40,
        50,
        0
    };
    box box_2=
    {
        "Cheng Chun",
        20,
        30,
        40,
        0
    };

    setValue(box_1);
    setValue(box_2);
    max_value=Getmaxvalue(box_1,box_2);
    cout<<"The max volume is "<<max_value.volume<<"."<<endl;

    system("pause");
    return 0;
}

template <> box Getmaxvalue<box>(box&b1,box&b2) { return b1.volume>b2.volume?b1:b2; }