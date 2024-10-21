//Given an integer array nums and an integer k, return the kth largest element in the array.
//Note that it is the kth largest element in the sorted order, not the kth distinct element.
//Solve it without sorting.
//Example:
//Input: nums = [3,2,1,5,6,4], k = 2
//Output: 5
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int findKthLargest(vector<int>& nums, int k) {
    priority_queue<int, vector<int>, greater<int>> minHeap;
    for (int num : nums) {
        minHeap.push(num); 
        if (minHeap.size() > k) {
            minHeap.pop();
        }
    }
    return minHeap.top();
}
int main() {
    vector<int> nums = {3, 2, 1, 5, 6, 4};
    int k = 2;
    int result = findKthLargest(nums, k);
    cout << "The " << k << "th largest element is: " << result << endl;
    return 0;
}