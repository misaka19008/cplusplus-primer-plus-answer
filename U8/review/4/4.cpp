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

void showInfo(const box&);
void setValue(box&);

int main(){
    box box_info=
    {
        "Zhao Lingyue",
        30,
        40,
        50,
        0
    };
    setValue(box_info);
    showInfo(box_info);

    system("pause");
    return 0;
}

void showInfo(const box & data){
    cout<<"Maker: "<<data.maker<<endl;
    cout<<"Length: "<<data.length<<endl;
    cout<<"Width: "<<data.width<<endl;
    cout<<"Height: "<<data.height<<endl;
    cout<<"Volume: "<<data.volume<<endl<<endl;
}

void setValue(box & data){
    data.volume=data.length*data.width*data.height;
}