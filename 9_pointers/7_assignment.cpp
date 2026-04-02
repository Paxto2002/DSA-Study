#include <iostream>

int main() {
    int a = 5;
    int *p = &a;
    int **q = &p;

    std::cout << *p << std::endl;   // 5 
    std::cout << **q << std::endl;  // 5
    std::cout << p << std::endl;    // address of a
    std::cout << *q << std::endl;  // address of a

    return 0;
}
