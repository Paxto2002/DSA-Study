#include <iostream>
int main()
{
    int m;
    int n;
    long long sum = 0;
    std::cout << "Enter the value of m (the base number): ";
    std::cin >> m;
    std::cout << "Enter the number of multiples to be printed (n): ";
    std::cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum += (long long)i * m;
    }
    std::cout << "The sum of the first " << n << " multiples of " << m
              << " is: " << sum << std::endl;
    // using mathematical formula
    std::cout << "\n\n*********** Using mathematical formula ***********";
    long long sum_total = m * (n * (n + 1)) / 2;
    std::cout << "\nThe sum of the first " << n << " multiples of " << m
              << " is: " << sum << std::endl;
    return 0;
}