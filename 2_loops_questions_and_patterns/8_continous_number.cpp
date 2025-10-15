#include <iostream>
int main()
{
    int n;
    std::cout << "Enter the the number of rows for this pattern: ";
    std::cin >> n;
    int num = 1;
    for (int i = 0; i < n; i++)
    {
        for (char j = 0; j < n; j++)
        {
            std::cout << " " << num << " ";
            num++;
        }

        std::cout << "\n";
    }
    return 0;
}