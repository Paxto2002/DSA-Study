#include <iostream>
int main()
{
    int n;
    std::cout << "Enter the the number of rows for this pattern: ";
    std::cin >> n;
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            std::cout<<" ";
        }
        for (int k = 0; k < n-i ; k++)
        {
            std::cout<<ch;
        }
        ch++;
        std::cout<<std::endl;
    }
    
    return 0;
}