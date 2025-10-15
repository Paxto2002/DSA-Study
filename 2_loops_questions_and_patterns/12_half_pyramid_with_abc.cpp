#include <iostream>
int main()
{
    int n;
    std::cout << "Enter the the number of rows for this pattern: ";
    std::cin >> n;
    char character = 'A';
    std::cout<<"\n\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (i+1); j++)
        {
            std::cout<<character;
        }
        character++;
        std::cout<<"\n";        
    }
    
    return 0;
}