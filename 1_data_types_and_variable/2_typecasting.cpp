#include <iostream>
int main()
{

    // *********** type Conversion (Implicit) ***********
    // char c = 'w';
    // int i = c;
    // std::cout<<std::endl<<"Type of i changes to int from char: "<<typeid(i).name()<<std::endl;

    // std::cout<<"Value of i: "<<i<<std::endl;

    // *********** type Casting (Explicit) ***********
    double price = 3.114;
    int newPrice = (int)price;
    std::cout<<newPrice<<std::endl;
    int x;
    // std::cin>>x;
    std::cout<<"Garbage value: "<<x<<std::endl;
    return 0;
}