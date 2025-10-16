#include <iostream>
int main()
{
    int n;
    std::cout << "Enter the the number of rows for this pattern: ";
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (char character = 'A'+ i; character >= 'A'; character--)
        {
            std::cout << character << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}