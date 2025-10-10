#include <iostream>
int main()
{
    int a = 10;
    int b = 10;
    int c = 10;
    int d = 10;
    std::cout << "++a: " << ++a << std::endl;
    std::cout << "b++: " << b++ << std::endl;
    std::cout << "b after b++: " << b << std::endl;
    std::cout << "--c: " << --c << std::endl;
    std::cout << "d--: " << d-- << std::endl;
    std::cout << "d after d++: " << d << std::endl;
    return 0;
}