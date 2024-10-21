// Given an array arr[] of size n, return an equilibrium index (if any) or -1 if no equilibrium index
//exists. The equilibrium index of an array is an index such that the sum of elements at lower
//indexes equals the sum of elements at higher indexes.
//Note: Return equilibrium point in 1-based indexing. Return -1 if no such point exists.
//Examples:
//Input: arr[] = {-7, 1, 5, 2, -4, 3, 0}
//Output: 4
//Explanation: In 1-based indexing, 4 is an equilibrium index, because:
//arr[1] + arr[2] + arr[3] = arr[5] + arr[6] + arr[7]
//Input: arr[] = {1, 2, 3}
//Output: -1
//Explanation: There is no equilibrium index in the array.
//Input:arr = {1, 3, 5, 2, 2}
//Expected Output:2
//Explanation: At index 2, the sum of elements on the left (1 + 3 = 4) is equal to the sum of
//elements on the right (2 + 2 = 4).


#include <iostream>
#include <vector>
using namespace std;
int findEquilibriumIndex(const vector<int>& arr) {
    int totalSum = 0;
    int leftSum = 0;  
    for (int num : arr) {
        totalSum += num;
    }
    for (int i = 0; i < arr.size(); i++) {
        totalSum -= arr[i];
        if (leftSum == totalSum) {
            return i; 
        }
        leftSum += arr[i];
         }
    return -1; 
}

int main() {
    vector<int> arr = {1, 3, 5, 2, 2};
    int index = findEquilibriumIndex(arr);
    if (index != -1) {
        cout << "Equilibrium index found at: " << index << endl;
    } else {
        cout << "No equilibrium index exists." << endl;
    }
    return 0;
}