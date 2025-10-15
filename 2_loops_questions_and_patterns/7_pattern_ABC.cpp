#include <iostream>
int main()
{
    int n;
    std::cout << "Enter the the number of rows for this pattern: ";
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        char character = 'A';
        for (char j = 0; j < n; j++)
        {
            std::cout << " " << character << " ";
            character++;
        }

        std::cout << "\n";
    }

    std::cout<<"\n\n";
    char character = 'A';
    for (int i = 0; i < n; i++)
    {
        for (char j = 0; j < n; j++)
        {
            std::cout << " " << character << " ";  // type conversion (implicit)
            character++;
        }

        std::cout << "\n";
    }
    return 0;
}