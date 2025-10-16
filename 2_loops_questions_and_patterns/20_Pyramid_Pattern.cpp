#include <iostream>
int main()
{
    int n;
    std::cout << "Enter the the number of rows for this pattern: ";
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        // spaces
        // (n-i-1) spaces
        for (int j = 0; j < (n-i-1); j++)
        {
            std::cout<<" ";
        }
        // nums1
        for (int k = 1; k <= i+1; k++)
        {
            std::cout<<k;
        }
        // nums2
        for (int l = i; l > 0; l--)
        {
            std::cout<<l;
        }
        std::cout<<std::endl;
    }

    return 0;
}