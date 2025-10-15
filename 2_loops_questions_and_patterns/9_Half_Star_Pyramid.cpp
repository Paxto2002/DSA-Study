#include <iostream>
int main()
{
    int n;
    std::cout << "Enter the the number of rows for this pattern: ";
    std::cin >> n;
    int pyramid = n * (n + 1) / 2;
    std::cout << "Number of asteriks in the half pyramid: " << pyramid<<std::endl;

    for (int i = 0; i < n; i++)
    {
        for (char j = 0; j < (i + 1); j++)
        {
            std::cout << " " << "*" << " ";
        }

        std::cout << "\n";
    }
    return 0;
}