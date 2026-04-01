#include <stdio.h>

// Function to perform Bubble Sort on an array
void bubbleSort(int arr[], int size) {
    // Outer loop for each pass
    for (int i = 0; i < size - 1; i++) {
        // Inner loop for comparing adjacent elements
        for (int j = 0; j < size - i - 1; j++) {
            // If the current element is greater than the next element, swap them
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];       // Store current element in temp
                arr[j] = arr[j + 1];     // Move next element to current position
                arr[j + 1] = temp;       // Put temp (original current element) in next position
            }
        }
        // After each pass, the largest element among unsorted elements moves to the end
    }
}

int main() {
    int size;

    // Ask the user for the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &size);

    int arr[size];

    // Input the elements of the array
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Call the bubbleSort function to sort the array
    bubbleSort(arr, size);

    // Print the sorted array
    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}