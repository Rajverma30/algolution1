//Given a sorted array A (sorted in ascending order), having N integers, find if there exists any
//pair of elements (A[i], A[j]) such that their sum is equal to X.
//a)Using Naive Approach
//b)Using Two Pointer Technique
//Input: A = [1, 2, 4, 5, 7, 11]
//N = 6
//X = 9
//Expected Output: Yes
//(Explanation: The pair (2, 7) sums to 9.)

#include <iostream>
#include <vector>
using namespace std;
bool findPairNaive(const vector<int>& A, int N, int X) {
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (A[i] + A[j] == X) {
                return true; 
            }
        }
    }
    return false;
}
int main() {
    vector<int> A = {1, 2, 4, 5, 7, 11};
    int N = A.size();
    int X = 9;
    if (findPairNaive(A, N, X)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}