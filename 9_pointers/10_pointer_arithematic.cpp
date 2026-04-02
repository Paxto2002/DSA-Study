#include <iostream>

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int b = 10;
    int *ptr1 = &b;
    int *ptr = arr; 

    std::cout << "--- Array Pointer Arithmetic ---" << std::endl;
    std::cout << "Initial value: " << *ptr << std::endl; 

    ptr++;
    std::cout << "After ptr++: " << *ptr << std::endl; 

    ptr++;
    std::cout << "After another ptr++: " << *ptr << std::endl; 

    ptr--;
    std::cout << "After ptr--: " << *ptr << std::endl; 

    std::cout << "\n--- Single Variable Pointer Arithmetic (Walking the Stack) ---" << std::endl;
    std::cout << "Before ptr1++ (Address): " << ptr1 << std::endl;
    std::cout << "Before ptr1++ (Value):   " << *ptr1 << std::endl;

    // Moving forward using ++
    ptr1++; // Moves to arr[0]
    std::cout << "After 1st ptr1++ (Value): " << *ptr1 << std::endl; 
    ptr1++; // Moves to arr[1]
    std::cout << "After 2nd ptr1++ (Value): " << *ptr1 << std::endl;
    ptr1++; // Moves to arr[2]
    std::cout << "After 3rd ptr1++ (Value): " << *ptr1 << std::endl;
    ptr1++; // Moves to arr[3]
    std::cout << "After 4th ptr1++ (Value): " << *ptr1 << std::endl;
    ptr1++; // Moves to arr[4]
    std::cout << "After 5th ptr1++ (Value): " << *ptr1 << std::endl;
    ptr1++; // Moves to Garbage
    std::cout << "After 6th ptr1++ (Value): " << *ptr1 << std::endl;

    // To actually MOVE the pointer with addition/subtraction, use += or -=
    std::cout << "\n--- Moving back using -= ---" << std::endl;
    
    ptr1 -= 1; // Moves back to arr[4]
    std::cout << "After ptr1 -= 1 (Value): " << *ptr1 << std::endl;

    ptr1 -= 2; // Jumps back 2 positions to arr[2]
    std::cout << "After ptr1 -= 2 (Value): " << *ptr1 << std::endl;

    ptr1 = ptr1 - 3; // Moves back 3 positions (likely back to b)
    std::cout << "After ptr1 = ptr1 - 3 (Value): " << *ptr1 << std::endl;

    // --- POINTER SUBTRACTION ---
    std::cout << "\n--- Pointer Subtraction ---" << std::endl;
    int *startPtr = &arr[0]; // Points to 10
    int *endPtr = &arr[4];   // Points to 50

    long distance = endPtr - startPtr;

    std::cout << "Distance (endPtr - startPtr): " << distance << " elements" << std::endl;

    // --- NEW: POINTER COMPARISON ---
    std::cout << "\n--- Pointer Comparison ---" << std::endl;
    std::cout << std::boolalpha; // This makes 1/0 print as true/false

    int *p1 = &arr[0];
    int *p2 = &arr[2];
    int *p3 = &arr[0];

    std::cout << "p1 == p3: " << (p1 == p3) << " (Point to same address)" << std::endl;
    std::cout << "p1 == p2: " << (p1 == p2) << " (Point to different addresses)" << std::endl;
    std::cout << "p1 < p2:  " << (p1 < p2)  << " (p1 comes before p2 in memory)" << std::endl;
    std::cout << "p2 > p1:  " << (p2 > p1)  << " (p2 comes after p1 in memory)" << std::endl;
    std::cout << "p1 <= p3: " << (p1 <= p3) << " (p1 is less than or equal to p3)" << std::endl;

    return 0;
}
