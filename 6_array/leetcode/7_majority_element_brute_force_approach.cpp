#include <iostream>
#include <vector>

int majorityElement(const std::vector<int> &nums)
{
    int n = nums.size();
    for(int value : nums) {
        int frequency = 0; // start from 0
        for (int element : nums) {
            if (element == value)
            {
                frequency++;
            }
        }
        if (frequency > n / 2) // check if more than half
        {
            return value; // return immediately when found
        }
    }
    return -1; // if no majority element exists
}

int main()
{
    std::vector<int> nums = {2, 2, 2, 2, 1, 1, 1};
    int me = majorityElement(nums);
    if(me != -1)
        std::cout << "Majority Element: " << me << "\n";
    else
        std::cout << "No majority element exists\n";
    return 0;
}