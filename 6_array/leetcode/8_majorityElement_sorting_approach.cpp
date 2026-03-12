#include <iostream>
#include <vector>
#include<algorithm>
int majorityElement(std::vector<int> &nums)
{
    int n = nums.size();
    sort(nums.begin(), nums.end());
    int frequency = 1, majorityElement = nums[0];;
    for (int i = 1; i < n; i++)
    {
        if (nums[i] == nums[i - 1])
        {
            frequency++;
        }
        else
        {
            frequency = 1;
        }
        if (frequency > n / 2)
        {
            majorityElement = nums[i];
        }
    }
    return -1;
}

int main()
{
    std::vector<int> nums = {2, 2, 2, 3, 4, 3, 5, 3, 6, 3, 7, 3, 2, 3, 3, 3, 3, 3};
    int me = majorityElement(nums);
    if (me != -1)
    {
        std::cout<<"No Majority Element found";
    } else {
        std::cout<<"Majority Element: ",me;
    }
    return 0;
}