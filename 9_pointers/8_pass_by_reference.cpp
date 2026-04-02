#include <iostream>

void changeA(int* ptr) { // Pass by reference using pointer
    *ptr = 10;
}
void changeB(int &ptr) { // Pass by reference using alias
    ptr = 20;
}
int main() {
    int a = 5;
    int b = 6;

    std::cout<<"a: "<<a<<"\n";
    std::cout<<"b: "<<b<<"\n";

    changeA(&a);
    changeB(b);

    std::cout<<"a: "<<a<<"\n";
    std::cout<<"b: "<<b<<"\n";
    return 0;
}
