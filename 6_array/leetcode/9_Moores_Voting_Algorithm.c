#include <stdio.h>

// Function to find the majority element using Boyer-Moore Voting Algorithm
// Returns the majority element if it exists, otherwise returns -1
int majorityElement(int nums[], int size)
{
    int frequency = 0;                 // Count of current candidate
    int majorityElementContainer = 0;  // Current candidate for majority element

    for (int i = 0; i < size; i++)
    {
        if (frequency == 0)
        {
            // No current candidate, pick nums[i] as new candidate
            majorityElementContainer = nums[i];
            frequency = 1;  // Start counting the new candidate
        }
        else if (majorityElementContainer == nums[i])
        {
            // Same as current candidate → increment frequency
            frequency++;
        }
        else
        {
            // Different from candidate → cancel one occurrence
            frequency--;
        }
    }

    // At this point, majorityElementContainer holds the potential majority
    // frequency <= 0 means no candidate survived (array has no majority)
    if (frequency <= 0)
    {
        return -1;
    }
    else
    {
        return majorityElementContainer;
    }
}

int main()
{
    int nums[] = {2, 2, 2, 2, 1, 1, 1, 1};
    int size = sizeof(nums)/sizeof(nums[0]);

    // Find majority element
    int me = majorityElement(nums, size);

    if (me == -1)
    {
        printf("No majority element found\n");
    }
    else
    {
        printf("Majority Element: %d\n", me);
    }

    return 0;
}