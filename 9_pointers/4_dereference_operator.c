#include <stdio.h>

int main() {
    int a = 0;
    int *ptrOfa = &a;

    float pi = 3.14f;
    float *ptrOfPi = &pi;
    float **ptrToPtrOfPi = &ptrOfPi;
    float ***ptrToPtrToPtrOfPi = &ptrToPtrOfPi;

    // Printing the actual memory addresses
    printf("Address of a: %p\n", (void*)ptrOfa);
    printf("Address of pi: %p\n", (void*)ptrOfPi);

    printf("\n--- Pointer Chain (Addresses of the Pointers) ---\n");

    // The address where the variable 'ptrOfPi' itself is stored
    printf("Address of ptrOfPi: %p\n", (void*)&ptrOfPi);

    // The address of 'ptrOfPi' accessed via the double pointer
    printf("Address of ptrOfPi using ptrToPtrOfPi: %p\n", (void*)ptrToPtrOfPi);

    // The address where the double pointer 'ptrToPtrOfPi' itself is stored
    printf("Address of ptrToPtrToPtrOfPi using ptrToPtrToPtrOfPi: %p\n", (void*)ptrToPtrToPtrOfPi);


    // ************ Printing actual values by dereferencing ************
    printf("***************************\nValue of a: %d\n", *ptrOfa);
    printf("Value of pi: %.2f\n", *ptrOfPi);

    printf("\n--- Pointer Chain (Dereferencing to get the value of pi) ---\n");

    // Accessing pi via various levels of redirection
    printf("Value of pi using ptrOfPi: %.2f\n", *ptrOfPi);
    printf("Value of pi using ptrToPtrOfPi: %.2f\n", **ptrToPtrOfPi);
    printf("Value of pi using ptrToPtrToPtrOfPi: %.2f\n", ***ptrToPtrToPtrOfPi);

    return 0;
}
