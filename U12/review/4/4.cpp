#include<iostream>
#include<cstring>
using std::ostream;
using std::endl;

class nifty
{
// 类中未使用private和public定义公/私有成员
private:
    char * personality;                                                 // 使用字符指针
    int talents;
public:
    nifty();
    nifty(const char * s);                                              // 应当使用const
    ~nifty();                                                           // 应当使用析构函数释放内存
    friend ostream & operator<<(ostream & os,const nifty & n);         // 重载<<运算符输出时未使用const关键字保护对象，使用友元
};                                                              // 添加分号

nifty::nifty(){
    personality=NULL;
    talents=0;
}

nifty::nifty(const char * s){
    personality=new char[strlen(s)+1];                          // 应为\0留出空间
    strcpy(personality,s);                                      // 应使用strcpy拷贝字符串内容而不是内存地址
    talents=0;
}

nifty::~nifty(){
    if (personality != NULL) delete [] personality;
}

ostream & operator<<(ostream & os,const nifty & n){             // 宁为啥要重载运算符？？？？？？为了好玩吗？？！
    os<<"Personality: "<<n.personality<<endl;                   // 原题     os<<n;
    os<<"Talents: "<<n.talents<<endl;
    return os;
}