#include <iostream>

int main()
{
    int a = 0;
    int *ptrOfa = &a;

    float pi = 3.14f;
    float *ptrOfPi = &pi;
    float **ptrToPtrOfPi = &ptrOfPi;
    float ***ptrToPtrToPtrOfPi = &ptrToPtrOfPi;

    // Printing the actual memory addresses (the locations)
    std::cout << "Address of a: " << (void*)ptrOfa << "\n";
    std::cout << "Address of pi: " << (void*)ptrOfPi << "\n";

    std::cout << "\n--- Pointer Chain (Addresses of the Pointers) ---\n";

    // The address where the variable 'ptrOfPi' itself is stored
    std::cout << "Address of ptrOfPi: " << (void*)&ptrOfPi << "\n";

    // The address of 'ptrOfPi' accessed via the double pointer
    std::cout << "Address of ptrOfPi using ptrToPtrOfPi: " << (void*)ptrToPtrOfPi << "\n";

    // The address where the double pointer 'ptrToPtrOfPi' itself is stored
    std::cout << "Address of ptrToPtrOfPi using ptrToPtrToPtrOfPi: " << (void*)ptrToPtrToPtrOfPi << "\n";


    // ************ Printing actual values by dereferencing ************
    std::cout << "***************************\nValue of a: " << *ptrOfa << "\n";
    std::cout << "Value of pi: " << *ptrOfPi << "\n";

    std::cout << "\n--- Pointer Chain (Dereferencing to get the value of pi) ---\n";

    // Accessing pi via 1 level of redirection
    std::cout << "Value of pi using ptrOfPi: " << *ptrOfPi << "\n";

    // Accessing pi via 2 levels of redirection
    std::cout << "Value of pi using ptrToPtrOfPi: " << **ptrToPtrOfPi << "\n";

    // Accessing pi via 3 levels of redirection
    std::cout << "Value of pi using ptrToPtrToPtrOfPi: " << ***ptrToPtrToPtrOfPi << "\n";

    return 0;
}


