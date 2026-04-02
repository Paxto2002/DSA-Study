#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3};

    printf("Memory Address (arr): %p\n", (void*)arr);
    printf("Value at that address (*arr): %d\n", *arr);
    
    return 0;
}
