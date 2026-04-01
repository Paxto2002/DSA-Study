#include <stdio.h>

// Function to perform Selection Sort on an array
void selectionSort(int arr[], int size) {
    // Outer loop for each position in the array
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;  // Assume the current element is the minimum

        // Inner loop to find the actual minimum element in the unsorted part
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;  // Update minIndex if a smaller element is found
            }
        }

        // Swap the found minimum element with the first element of the unsorted part
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
        // After this step, the element at index i is in its correct position
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

    // Call the selectionSort function to sort the array
    selectionSort(arr, size);

    // Print the sorted array
    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}