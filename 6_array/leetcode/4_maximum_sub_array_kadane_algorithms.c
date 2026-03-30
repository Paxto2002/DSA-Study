#include <stdio.h>
#include <limits.h>  // For INT_MIN

// Helper function to return the maximum of two numbers
int max(int a, int b)
{
    return (a > b) ? a : b;
}

int main()
{
    const int n = 7;  // Size of the array
    int nums[] = {3, -4, 5, 4, -1, 7, -8};  // Input array

    int maximumSum = INT_MIN;  
    // Initialize maximumSum to smallest possible integer
    // Ensures even if all numbers are negative, the max is correct

    int currentSum = 0;  
    // Running sum of the current subarray

    // Loop through each element of the array
    for (int i = 0; i < n; i++)
    {
        currentSum += nums[i];  
        // Add current element to currentSum

        maximumSum = max(currentSum, maximumSum);  
        // Update maximumSum if currentSum is larger

        if (currentSum < 0)
        {
            currentSum = 0;  
            // If currentSum becomes negative, reset it
            // Why? Because a negative sum will reduce any future subarray sum
            // So we start fresh from the next element
        }
    }

    printf("Maximum subarray sum: %d\n", maximumSum);  
    // Print the result
    return 0;
}