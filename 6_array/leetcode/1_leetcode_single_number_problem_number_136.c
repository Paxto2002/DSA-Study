#include <stdio.h>

// Function to find the element that appears only once
int singleNumber(int* nums, int numsSize) {
    int answer = 0;
    // Initialize answer to 0
    // Reason: XOR with 0 gives the number itself (a ^ 0 = a)

    for (int i = 0; i < numsSize; i++) {
        answer ^= nums[i];
        // XOR current element with answer

        // Key Idea:
        // - If a number appears twice, it cancels out:
        //      a ^ a = 0
        // - XOR is associative and commutative:
        //      a ^ b ^ a = (a ^ a) ^ b = 0 ^ b = b
        //
        // So all duplicate numbers cancel each other,
        // leaving only the unique number
    }

    return answer;
    // Final result is the number that appears only once
}

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Check for invalid input size
    if (n <= 0) {
        printf("Invalid size\n");
        return 1;
    }

    int nums[n]; 
    // Declare an array of size n (Variable Length Array)

    // Take input from the user
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &nums[i]);
    }

    // Call the function to find the single number
    int result = singleNumber(nums, n);

    // Print the result
    printf("The single number is: %d\n", result);

    return 0;
}