#include <stdio.h>

int main()
{
    float pi = 3.14f;
    float *ptrOfPi = &pi;
    float **ptrToPtrOfPi = &ptrOfPi;
    float ***ptrToPtrToPtrOfPi = &ptrToPtrOfPi;

    // --- SECTION 1: RAW ADDRESSES ---
    printf("--- Base Addresses ---\n");
    printf("Address of pi variable:       %p\n", (void*)&pi);
    printf("Address of ptrOfPi:           %p\n", (void*)&ptrOfPi);
    printf("Address of ptrToPtrOfPi:      %p\n", (void*)&ptrToPtrOfPi);
    printf("Address of ptrToPtrToPtrOfPi: %p\n", (void*)&ptrToPtrToPtrOfPi);

    // --- SECTION 2: DEREFERENCING THE TRIPLE POINTER ---
    printf("\n--- Explaining the Triple Pointer Chain ---\n");

    // Level 0: The pointer itself
    // Contains the address of the double pointer box
    printf("ptrToPtrToPtrOfPi (No *)    -> Holds Address of ptrToPtrOfPi: %p\n", (void*)ptrToPtrToPtrOfPi);

    // Level 1: One step back (*)
    // Opens the triple pointer to see the address of the double pointer
    printf("*ptrToPtrToPtrOfPi (1 *)   -> Holds Address of ptrOfPi:      %p\n", (void*)*ptrToPtrToPtrOfPi);

    // Level 2: Two steps back (**)
    // Opens the double pointer to see the address of the single pointer (which points to pi)
    printf("**ptrToPtrToPtrOfPi (2 *)  -> Holds Address of pi:          %p\n", (void*)**ptrToPtrToPtrOfPi);

    // Level 3: Three steps back (***)
    // Opens the final box to see the actual value stored in 'pi'
    printf("***ptrToPtrToPtrOfPi (3 *) -> Holds Value of pi:            %.2f\n", ***ptrToPtrToPtrOfPi);

    return 0;
}
