#include <stdio.h>

// Linear search function
// Returns the index of the target if found, otherwise returns -1
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;  // target found, return index
        }
    }
    return -1;  // target not found
}

int main() {
    int size, target;

    // Ask user for array size
    printf("Enter the number of elements: ");
    scanf("%d", &size);

    int arr[size];

    // Input array elements
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Input the target to search
    printf("Enter the target element to search: ");
    scanf("%d", &target);

    // Call the linear search function
    int result = linearSearch(arr, size, target);

    // Print result
    if (result != -1) {
        printf("Element found at index: %d\n", result);
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}