#include <iostream>

int main()
{

    float pi = 3.14f;
    float *ptrOfPi = &pi;
    float **ptrToPtrOfPi = &ptrOfPi;
    float ***ptrToPtrToPtrOfPi = &ptrToPtrOfPi;

    // --- SECTION 1: RAW ADDRESSES ---
    std::cout << "--- Base Addresses ---\n";
    std::cout << "Address of pi variable:       " << (void*)&pi << "\n";
    std::cout << "Address of ptrOfPi:           " << (void*)&ptrOfPi << "\n";
    std::cout << "Address of ptrToPtrOfPi:      " << (void*)&ptrToPtrOfPi << "\n";
    std::cout << "Address of ptrToPtrToPtrOfPi: " << (void*)&ptrToPtrToPtrOfPi << "\n";

    // --- SECTION 2: DEREFERENCING THE TRIPLE POINTER ---
    std::cout << "\n--- Explaining the Triple Pointer Chain ---\n";

    // Level 0: The pointer itself
    std::cout << "ptrToPtrToPtrOfPi (Without *)    -> Holds Address of ptrToPtrOfPi: " << (void*)ptrToPtrToPtrOfPi << "\n";

    // Level 1: One step back
    std::cout << "*ptrToPtrToPtrOfPi (One *)   -> Holds Address of ptrOfPi:      " << (void*)*ptrToPtrToPtrOfPi << "\n";

    // Level 2: Two steps back
    std::cout << "**ptrToPtrToPtrOfPi (Two *)  -> Holds Address of pi:          " << (void*)**ptrToPtrToPtrOfPi << "\n";

    // Level 3: Three steps back (The Destination)
    std::cout << "***ptrToPtrToPtrOfPi (Three *) -> Holds Value of pi:            " << ***ptrToPtrToPtrOfPi << "\n";

    return 0;
}
