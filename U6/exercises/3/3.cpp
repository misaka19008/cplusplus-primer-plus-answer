#include<iostream>
using namespace std;
void showMenu(void);
void startGenshin(void);
int main(){
    char choice;

    showMenu();
    cout<<"Enter your choice: ";
    cin>>choice;
    while(choice != 'q')
    {    
        switch (choice)
        {
        case 'c':
            system("calc");
            break;
        case 'p':
            system("start https://www.xiwnn.com/piano/?ivk_sa=1024320u");
            break;
        case 't':
            cout<<"A maple is a tree."<<endl;
            break;
        case 'g':
            startGenshin();
            break;
        default:
            cout<<"Please enter a valid choice!";
        }
        showMenu();
        cout<<"Enter a choice: ";
        cin>>choice;
    }
    cout<<"Bye!"<<endl;

    system("pause");
    return 0;
}

void showMenu(void){
    cout<<"Please enter one of the following choices:\n"
          "    c) calc                  p) pianist\n"
          "    t) tree                  g) game\n";
}

void startGenshin(void){
    system("launcher.exe");
}