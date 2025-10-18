#include <iostream>
int main()
{
    int a = 4, b = 8, i = 1, j = 2;
    int bitwiseAndResult = a & b;
    int bitwiseOrResult = a | b;
    int bitwiseXORResult = a ^ b;
    int leftShiftResult = a << i;
    int rightShiftResult = a >> j;
    std::cout << a << " & (AND) " << b << " = " << bitwiseAndResult << std::endl;
    std::cout << a << " | (OR) " << b << " = " << bitwiseOrResult << std::endl;
    std::cout << a << " ^ (XOR) " << b << " = " << bitwiseXORResult << std::endl;
    std::cout << a << " << (Left Shift) " << i << " = " << leftShiftResult << std::endl;
    std::cout << a << " >> (Right Shift) " << i << " = " << rightShiftResult << std::endl;

    return 0;
}