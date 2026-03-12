#include <iostream>
#include <limits.h>
#include <algorithm>
int main()
{
    int const n = 5;
    int nums[n] = {1, 2, 3, 4, 5};
    int maximumSum = INT_MIN;
    for (int start = 0; start < n; start++)
    {
        int currentSum = 0;
        for (int end = start; end < n; end++)
        {
            currentSum += nums[end];
            maximumSum = std::max(currentSum, maximumSum);
        }
    }
    std::cout << "Maximum subarray: " << maximumSum << "\n";
    return 0;
}