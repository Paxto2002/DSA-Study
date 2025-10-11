#include <iostream>
int main()
{
    int n;
    long long factorial = 1;

    std::cout << "Enter the number to calculate its factorial: ";
    std::cin >> n;
    for (int i = n; i > 1; i--)
    {
        factorial *= i;
    }
    std::cout<<"Factorial of "<<n<<" is "<<factorial<<std::endl;
    return 0;
}