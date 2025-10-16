#include <iostream>
int main()
{
    int n;
    std::cout << "Enter the the number of rows for this pattern: ";
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j > 0; j--)
        {
            std::cout<<j<<" ";
        }
        std::cout<<"\n";        
    }
    
    return 0;
}