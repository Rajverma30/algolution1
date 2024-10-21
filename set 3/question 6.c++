//cyclic shift ,if palindrome return 1 else -1.
#include <iostream>
#include <string>
using namespace std;
bool canFormPalindrome(const string &s) {
    int charCount[256] = {0};
    for (char c : s) {
        charCount[c]++;
    }
    int oddCount = 0;
    for (int count : charCount) {
        if (count % 2 != 0) {
            oddCount++;
        }
    }
    return oddCount <= 1; 
}
int minCyclicShiftsToPalindrome(string s) {
    int n = s.length();
    if (!canFormPalindrome(s)) {
        return -1;
    }
    int shifts = 0;
    string reversed = string(s.rbegin(), s.rend());
    while (s != reversed) {
        if (s[0] == s[n - 1]) {
            s = s.substr(1, n - 2);
            n -= 2; 
        } else {
            s = s.substr(1) + s[0];
            shifts++;
        }
    }
    return shifts;
}
int main() {
    int T;
    cin >> T; 
    while (T--) {
        string s;
        cin >> s; 
        cout << minCyclicShiftsToPalindrome(s) << endl; 
    }
    return 0;
}