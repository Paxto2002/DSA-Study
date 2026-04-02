#include <iostream>

int main() {
    int arr[] = {1, 2, 3};

    // In C++, this will automatically print the memory address in Hexadecimal
    std::cout << "arr: " << arr << std::endl;
    std::cout << "*arr: " << *arr << std::endl;
    return 0;
}
