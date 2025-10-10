#include <iostream>
#include <string>
#include <typeinfo>
int main()
{
    int waseem_int = 23;
    char waseem_char = 'H';
    std::string waseem_string = "Waseem";
    float waseem_float = 3.14;
    double waseem_double;
    std::cout << "Type of waseem_int: " << typeid(waseem_int).name() << std::endl;
    std::cout << "Type of waseem_char: " << typeid(waseem_char).name() << std::endl;
    std::cout << "Type of waseem_string: " << typeid(waseem_string).name() << std::endl;
    std::cout << "Type of waseem_float: " << typeid(waseem_float).name() << std::endl;
    std::cout << "Type of waseem_double: " << typeid(waseem_double).name() << std::endl
              << std::endl;

    std::cout << "Size of waseem_int: " << sizeof(waseem_int) << std::endl;
    std::cout << "Size of waseem_char: " << sizeof(waseem_char) << std::endl;
    std::cout << "Size of waseem_string: " << sizeof(waseem_string) << std::endl;
    std::cout << "Size of waseem_float: " << sizeof(waseem_float) << std::endl;
    std::cout << "Size of waseem_double: " << sizeof(waseem_double) << std::endl
              << std::endl;

    int i = 45;
    float f = 9.13;
    char c = 'w';

    if (typeid(i) == typeid(f) && typeid(i) == typeid(c))
    {
        std::cout << "All data types are same." << std::endl;
    }
    else
    {
        std::cout << "All data types are NOT same." << std::endl;
    }

    return 0;
}