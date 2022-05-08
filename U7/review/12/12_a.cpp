#include<iostream>
using namespace std;
struct applicant
{
    char name[30];
    int credit_ratings[3];
};
void showInfo(applicant);

int main(){
    applicant object_data =
    {
        "Emalia",
        {420,500,650}
    };
    cout<<"Show info:"<<endl;
    showInfo(object_data);

    system("pause");
    return 0;
}

void showInfo(applicant data){
    cout<<data.name<<" : ";
    for (int i = 0; i < 3; i++)
    {
        cout<<data.credit_ratings[i]<<"\t";
    }
    cout<<endl;
}