#include <iostream>
int main()
{
    int n;
    int sum_of_odd = 0;
    std::cout<<"Enter the value for n: ";
    std::cin>>n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            sum_of_odd+=i;
        }
        
    }
    std::cout<<"Sum of first n odd numbers = "<<sum_of_odd<<std::endl;    
    return 0;
}