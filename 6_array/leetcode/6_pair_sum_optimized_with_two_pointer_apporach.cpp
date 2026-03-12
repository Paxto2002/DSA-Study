#include <iostream>
#include <vector>
std::vector<int> pairSum(int target, const std::vector<int> &nums)
{
    size_t start = 0, end = nums.size() - 1;
    while (start < end)
    {
        int sum = nums[start] + nums[end];
        if (sum == target)
            return {nums[start], nums[end]}; // return pair in form of an array(vector)
        else if (sum < target)
            start++;
        else
            end--;
    }
    return {}; // return empty vector if not found
}

int main()
{
    std::vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    std::vector<int> result = pairSum(target, nums);
    if (result.empty())
    {
        std::cout << "No pair found\n";
    }
    else
    {
        std::cout << "Pair found: " << result[0] << " " << result[1] << "\n";
    }

    return 0;
}