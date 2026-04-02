#include <stdio.h>

// Pass by address using a pointer (Same as C++)
void changeA(int* ptr) {
    *ptr = 10;
}

// In C, we MUST use a pointer here because C has no references (&)
void changeB(int* ptr) { 
    *ptr = 20;
}

int main() {
    int a = 5;
    int b = 6;

    printf("a: %d\n", a);
    printf("b: %d\n", b);

    // Call changeA by passing the address of a
    changeA(&a);
    
    // Call changeB by passing the address of b (Notice the & added here)
    changeB(&b);

    printf("a: %d\n", a);
    printf("b: %d\n", b);

    return 0;
}
