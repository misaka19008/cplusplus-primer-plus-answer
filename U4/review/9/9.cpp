#include<iostream>
#include<cstring>
using namespace std;
struct aboutFish
{
    string name;
    int weight;
    float length;
};

int main(){
    aboutFish fish =
    {
        "Cyprinus carpio",
        1,
        25.0,
    };
    system("pause");
    return 0;
}
