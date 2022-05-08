#include<iostream>
#include<cstring>
using namespace std;
struct box
{
    char maker[80];
    float height;
    float width;
    float length;
    float volume;
};
void showInfo(box);
void setVolume(box*);

int main(){
    char cache_maker[80];
    box ob_box;
    box * ptr_box;
    ptr_box=&ob_box;
    
    cout<<"Enter maker's name of the box: ";
    cin.getline(cache_maker,80);
    strcpy(ptr_box->maker,cache_maker);
    cout<<"Enter length of the box: ";
    cin>>ptr_box->length;
    cout<<"Enter width of the box: ";
    cin>>ptr_box->width;
    cout<<"Enter height of the box: ";
    cin>>ptr_box->height;
    cout<<endl;
    setVolume(ptr_box);
    showInfo(ob_box);

    system("pause");
    return 0;
}
void showInfo(box object_box){
    cout<<"Info:"<<endl;
    cout<<"Maker: "<<object_box.maker<<endl;
    cout<<"Length: "<<object_box.length<<endl;
    cout<<"Width: "<<object_box.width<<endl;
    cout<<"Height: "<<object_box.height<<endl;
    cout<<"Volume: "<<object_box.volume<<endl;
    cout<<"Done!"<<endl<<endl;
}

void setVolume(box * ptr_ob_box){
    ptr_ob_box->volume=ptr_ob_box->length*ptr_ob_box->width*ptr_ob_box->height;
}