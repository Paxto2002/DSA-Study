#include <stdio.h>
int majorityElement(int *nums[], int size)
{
    int frequency = 0, majorityElementContainer = 0;
    for (int i = 0; i < size; i++)
    {
        if (frequency == 0)
        {
            majorityElementContainer = nums[i];
            frequency = 1;
        } else if (majorityElementContainer == nums[i])
        {
            frequency++;
        } else {
            frequency--;
        }
    }
    if (frequency <= 0)
    {
        return -1;
    } else {
        return majorityElementContainer;
    }
        
}

int main()
{
    int nums[] = {2, 2, 2, 2, 1, 1, 1, 1};
    int size = sizeof(nums)/sizeof(nums[0]);
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