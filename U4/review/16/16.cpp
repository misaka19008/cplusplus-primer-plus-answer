#include<iostream>
#include<vector>
#include<array>
using namespace std;
const int number_of_obj=10;
int main(){
    // C++98 STL (vector)
    vector<string> str_list_1(number_of_obj);
    str_list_1[0]="486";
    str_list_1[1]="Emalia";
    str_list_1[2]="Rem";
    str_list_1[3]="Ram";
    // C++11 (array)
    array<string,number_of_obj> str_list_2={"M4A1","AR15","UMP45"};
    return 0;
}