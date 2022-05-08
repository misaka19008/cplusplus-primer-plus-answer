#include<iostream>
void simon(int);

int main(){
    using namespace std;
    int count;

    simon(3);
    cout<<"Pick an integer:";
    cin>>count;
    simon(count+3);
    cout<<"Done!"<<endl;
    system("pause");
    return 0;
}

void simon(int n){
    using namespace std;
    
    cout<<"Simon says touch your toes "<<n<<" times."<<endl;
}