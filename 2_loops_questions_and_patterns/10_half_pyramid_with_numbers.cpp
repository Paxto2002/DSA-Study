#include <iostream>
int main()
{
    int n;
    std::cout << "Enter the the number of rows for this pattern: ";
    std::cin >> n;
    int count = 1;

    for (int i = 0; i < n; i++)
    {
        for (char j = 0; j < (i + 1); j++)
        {
            std::cout << count ;
        }
        count++;
        std::cout << "\n";
    }

    std::cout<<"\n\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (i+1); j++)
        {
            std::cout<<(i+1);
        }
        std::cout<<"\n";        
    }
    
    return 0;
}