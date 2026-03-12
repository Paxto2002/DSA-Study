#include <stdio.h>

int majorityElement(const int nums[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int frequency = 0;
        for (int j = 0; j < size; j++)
        {
            if (nums[i] == nums[j])
                frequency++;
        }
        if (frequency > size / 2)
            return nums[i]; // return immediately
    }
    return -1; // no majority element
}

int main()
{
    int nums[] = {2, 2, 2, 3, 4, 3, 5, 3, 6, 3, 7, 3, 2, 3, 3, 3, 3, 3};
    int size = sizeof(nums) / sizeof(nums[0]);
    printf("%d\n", size);  
    int me = majorityElement(nums, size);
    if (me != -1)
        printf("Majority Element: %d \n", me);
    else
        printf("No majority element exists\n");
    return 0;
}