#include <stdio.h>
#include <stdbool.h>

// Function to find a pair that sums up to target
// Returns true if found, false otherwise
// result[2] stores the pair if found
bool pairSum(int target, int size, int nums[], int result[2])
{
    // Loop through each element
    for (int i = 0; i < size; i++)
    {
        // Loop through all elements after i to avoid duplicates
        for (int j = i + 1; j < size; j++)
        {
            // Check if the sum matches target
            if (nums[i] + nums[j] == target)
            {
                result[0] = nums[i];  // store first number
                result[1] = nums[j];  // store second number
                return true;          // pair found
            }
        }
    }
    return false; // no pair found
}

int main()
{
    int size = 4;
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int result[2];  // array to store the result pair

    if (pairSum(target, size, nums, result))
    {
        printf("%d %d\n", result[0], result[1]); // print pair
    }
    else
    {
        printf("No pairs found\n");
    }

    return 0;
}