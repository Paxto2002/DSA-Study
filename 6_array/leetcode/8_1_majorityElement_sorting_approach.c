#include <stdio.h>

// Function to find majority element after sorting
int majorityElement(int nums[], int n)
{
    // Bubble sort: sort array in ascending order
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] > nums[j])
            {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }

    // After sorting, same elements are consecutive
    int frequency = 1;
    for (int i = 1; i < n; i++)
    {
        if (nums[i] == nums[i - 1])
            frequency++;  // increment frequency if same as previous
        else
            frequency = 1; // reset frequency if different

        if (frequency > n / 2)
            return nums[i]; // majority element found
    }

    return -1; // no majority element
}

int main()
{
    int nums[] = {2, 2, 2, 3, 4, 3, 5, 3, 6, 3, 7, 3, 2, 3, 3, 3, 3, 3};
    int n = sizeof(nums) / sizeof(nums[0]);

    int me = majorityElement(nums, n);

    if (me == -1)
        printf("No Majority Element found\n");
    else
        printf("Majority Element: %d\n", me);

    return 0;
}