#include <iostream>
int main()
{
    int n;
    int sum = 0;
    std::cout<<"Enter the value for n: ";
    std::cin>>n;
    for (int i = 0; i <= n; i++)
    {
        sum+=i;
    }
    std::cout<<"Sum of these numbers = "<<sum<<std::endl;    
    return 0;
}