#include<iostream>
using namespace std;
struct applicant
{
    string name;
    int credit_ratings[3];
};
void showInfo(applicant*);

int main(){
    applicant * object_data=new applicant;
    object_data->name="Emalia";
    object_data->credit_ratings[0]=420;
    object_data->credit_ratings[1]=500;
    object_data->credit_ratings[2]=600;
    showInfo(object_data);
    delete [] object_data;

    system("pause");
    return 0;
}

void showInfo(applicant * ob_ptr){
    cout<<"Show info:"<<endl;
    cout<<ob_ptr->name<<" : ";
    for (int i = 0; i < 3; i++)
    {
        cout<<ob_ptr->credit_ratings[i]<<"\t";
    }
    cout<<endl;
}