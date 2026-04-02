#include <stdio.h>
int main()
{
    int a = 0;
    int *ptrOfa = &a;
    float pi = 3.14;
    float *ptrOfPi = &pi;
    printf("Address of a (%d) in memory = %p\n", a, ptrOfa);
    printf("Address of pi (%2f) in memory = %p\n", pi, ptrOfPi);
    printf("Address of ptrOfPi in memory = %p\n", (void *)&ptrOfPi);
    return 0;
}