#include <stdio.h>

int majorityElement(int nums[], int n)
{
    // Bubble sort
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

    // Count frequency
    int frequency = 1;
    for (int i = 1; i < n; i++)
    {
        if (nums[i] == nums[i - 1])
            frequency++;
        else
            frequency = 1;

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