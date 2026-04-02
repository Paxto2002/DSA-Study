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
    
    // This is the address of the pointer variable 'ptrOfPi'
    std::cout << "Address of ptrOfPi: " << (void*)&ptrOfPi << "\n";
    
    // This is also the address of 'ptrOfPi', but accessed via the double pointer
    std::cout << "Address of ptrOfPi using ptrToPtrOfPi: " << (void*)ptrToPtrOfPi << "\n";
    
    // This is the address of the double pointer 'ptrToPtrOfPi'
    std::cout << "Address of ptrToPtrOfPi using ptrToPtrToPtrOfPi: " << (void*)ptrToPtrToPtrOfPi << "\n";

    return 0;
}
