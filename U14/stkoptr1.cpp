#include<iostream>
#include<cstdlib>
#include<ctime>
#include "header_files/stacktp1.h"
using std::cin;
using std::cout;
using std::endl;
using std::srand;
using std::time;
const int NUM=10;

int main(){
    int s_size;
    int nextin=0;
    int processed=0;
    srand(time(0));
    cout<<"Please enter stack size: ";
    cin>>s_size;
    Stack<const char *> st(s_size);

    const char * in[NUM]={
        " 1: Zhao Lingyue"," 2: Zhou Xuanqin",
        " 3: Zhang Zixin"," 4: Cheng Yidan",
        " 5: Li Chenyue"," 6: Fan shutong",
        " 7: Jin Qiu"," 8: Cheng Chun",
        " 9: Fang Yanjie"," 10: Chao Kexin"
    };
    const char * out[NUM];

    while (processed < NUM)
    {
        if (st.isempty()) st.push(in[nextin++]);
        else if (st.isfull()) st.pop(out[processed++]);
        else if (rand()%2 && nextin < NUM) st.push(in[nextin++]);
        else st.pop(out[processed++]);
    }
    for (int i = 0; i < NUM; i++) cout<<out[i]<<endl;
    cout<<"Bye!"<<endl;

    system("pause");
    return 0;
}