//Given an integer array nums, find the
// subarray with the largest sum, and return its sum.
//Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
// Output: 6
//Explanation: The subarray [4,-1,2,1] has the largest sum 6.

#include <iostream>
#include <vector>
using namespace std;
int maxSubArray(const vector<int>& nums) {
    int maxSum = nums[0]; 
    int currentSum = nums[0];
    for (size_t i = 1; i < nums.size(); i++) {
        currentSum = max(nums[i], currentSum + nums[i]); 
        maxSum = max(maxSum, currentSum);
    }
    return maxSum;
}
int main() {
    vector<int> nums = {7,5,-9,-1,2,3,7,6,-7};
    int result = maxSubArray(nums);
    cout << "The largest sum of the subarray is: " << result << endl;
    return 0;
}