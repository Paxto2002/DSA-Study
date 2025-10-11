#include <iostream>
int main()
{
    char asterik = '*';
    int r, c;
    // ********** rectangle **********
    std::cout << "Enter the number of rows: ";
    std::cin >> r;
    std::cout << "Enter the number of columns: ";
    std::cin >> c;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            std::cout << asterik;
        }
        std::cout << "\n";
    }

    //    ********** Trying another method to solve the rectangle problem **********

    std::cout << "\n\n********** Second Method **********" << std::endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            std::cout << asterik;
        }
        std::cout << "\n";
    }

    return 0;
}