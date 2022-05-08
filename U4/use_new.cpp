#include<iostream>
using namespace std;
int main(){
    int nights=1001;
    int * pt=new int;
    *pt=nights;
    double * pd=new double;
    *pd=0.1314520;

    // Show values and its addresses.
    cout<<"\"nights\" value = "<<nights<<": location "<<&nights<<endl;
    cout<<"int value = "<<*pt<<": location = "<<pt<<endl;
    cout<<"value = "<<*pd<<": location = "<<pd<<endl;
    cout<<"location of pointer \"pd\": "<<&pd<<endl;
    // Show their size.
    cout<<"size of \"pt\"= "<<sizeof(pt)<<": size of \"*pt\" = "<<sizeof(*pt)<<endl;
    cout<<"size of \"pd\"= "<<sizeof(pd)<<": size of \"*pd\" = "<<sizeof(*pd)<<endl;

    system("pause");
    return 0;
}