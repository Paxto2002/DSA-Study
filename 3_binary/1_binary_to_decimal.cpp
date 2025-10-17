#include <iostream>

int decToBinary(int decNum) {
    int answer = 0, power = 1;
    while (decNum)
    {
        int rem = (decNum % 2);
        decNum /= 2;
        answer += (rem * power);
        power *= 10;
    }
    return answer;
}

int binToDecimal(int binNum)
{
    int answer = 0, power = 1;
    while (binNum > 0)
    {
        int rem = (binNum % 10);
        binNum /= 10;
        answer += (rem * power);
        power *= 2;
    }
    return answer;
}
int main()
{
    int num1, num2;
    std::cout<<"Enter a Binary Number: ";
    std::cin>>num1;
    std::cout<< "Binary Number "<< num1 << " = " << binToDecimal(num1) << " in decimal " << std::endl;
    std::cout<<"Enter a Decimal Number: ";
    std::cin>>num2;
    std::cout<< "Decimal Number "<< num2 << " = " << decToBinary(num2) << " in binary " << std::endl;

    return 0;
}