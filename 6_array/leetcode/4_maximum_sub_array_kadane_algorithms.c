#include <stdio.h>
#include <limits.h>

int max(int a, int b)
{
    return (a > b) ? a : b;
}

int main()
{
    int const n = 7;
    int nums[] = {3, -4, 5, 4, -1, 7, -8};

    int maximumSum = INT_MIN;
    int currentSum = 0;

    for (int i = 0; i < n; i++)
    {
        currentSum += nums[i];
        maximumSum = max(currentSum, maximumSum);

        if (currentSum < 0)
        {
            currentSum = 0;
        }
    }

    printf("Maximum subarray: %d\n", maximumSum);
    return 0;
}
