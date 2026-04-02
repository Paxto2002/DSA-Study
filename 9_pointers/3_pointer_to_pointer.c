#include <stdio.h>

int main() {
    int a = 0;
    int *ptrOfa = &a;

    float pi = 3.14f;
    float *ptrOfPi = &pi;
    float **ptrToPtrOfPi = &ptrOfPi;
    float ***ptrToPtrToPtrOfPi = &ptrToPtrOfPi;

    // Printing the actual memory addresses (the locations)
    // Using %p requires casting to (void*) for standard compliance
    printf("Address of a: %p\n", (void*)ptrOfa);
    printf("Address of pi: %p\n", (void*)ptrOfPi);
    
    printf("\n--- Pointer Chain (Addresses of the Pointers) ---\n");
    
    // The address where the variable 'ptrOfPi' itself is stored
    printf("Address of ptrOfPi: %p\n", (void*)&ptrOfPi);
    
    // The address of 'ptrOfPi' accessed via the double pointer
    printf("Address of ptrOfPi using ptrToPtrOfPi: %p\n", (void*)ptrToPtrOfPi);
    
    // The address where the double pointer 'ptrToPtrOfPi' itself is stored
    printf("Address of ptrToPtrOfPi using ptrToPtrToPtrOfPi: %p\n", (void*)ptrToPtrToPtrOfPi);

    return 0;
}
