#include <stdio.h>
#include <limits.h> // For INT_MIN, represents smallest possible int

int main()
{
    // Your array declaration is slightly wrong:
    // int nums[3] = {3, -4, 5, 4, -1, 7, -8};
    // Here you only allocated space for 3 elements but initialized 7.
    // Correct:
    int nums[7] = {3, -4, 5, 4, -1, 7, -8};
    int n = 7;  // Number of elements in the array

    int maximumSum = INT_MIN;  
    // Initialize maximumSum to smallest possible integer
    // So any subarray sum will be larger than this

    // Outer loop: start index of subarray
    for (int start = 0; start < n; start++)
    {
        int currentSum = 0;  
        // currentSum stores sum of subarray starting at 'start'

        // Inner loop: end index of subarray
        for (int end = start; end < n; end++)
        {
            currentSum += nums[end];  
            // Add current element to currentSum

            // Update maximumSum if current subarray sum is larger
            if (maximumSum < currentSum)
            {
                maximumSum = currentSum;
            }
        }
    }

    printf("Maximum subarray sum: %d\n", maximumSum);
    return 0;
}