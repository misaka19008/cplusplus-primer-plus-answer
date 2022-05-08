#include<iostream>
int main(){
    double x;
    std::cout<<"Enter value: ";
    while (!(std::cin>>x))
    {
        std::cout<<"Bad input. Please enter a number: ";
        std::cin.clear();
        while (std::cin.get() != '\n') continue;
    }
    std::cout<<"Value = "<<x<<std::endl;

    system("pause");
    return 0;
}