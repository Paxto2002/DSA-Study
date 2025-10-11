#include <iostream>
int main()
{
   char asterik = '*';
   int n;
   std::cout<<"Enter the number of rows and columns to be printed: ";
   std::cin>>n;
    // ********** Square **********
   for (int i = 0; i < n; i++)
   {
    for (int j = 0; j < n; j++)
    {
        std::cout<<asterik;
    }
    std::cout<<"\n";
   }
   
    return 0;
}