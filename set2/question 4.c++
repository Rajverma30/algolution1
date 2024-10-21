//A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and
//removing all non-alphanumeric characters, it reads the same forward and backward.
//Alphanumeric characters include letters and numbers.
//Given a string s, return true if it is a palindrome, or false otherwise.
//Example 1:
//Input: s = “A man, a plan, a canal: Panama”
//Output: true
//Explanation: “amanaplanacanalpanama” is a palindrome.

#include <iostream>
using namespace std;
bool isPalindrome(string s) {
    string filtered;
    for (char ch : s) {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) {
            if (ch >= 'A' && ch <= 'Z') {
                ch = ch + ('a' - 'A');
            }
            filtered += ch;
        }
    }
    int left = 0;
    int right = filtered.size() - 1;
    while (left < right) {
       if (filtered[left] != filtered[right]) {
            return false; 
        }
        left++;
        right--;
    }
    return true;
}
int main() {
    string s1 = "A man, a plan, a canal: Panama";
    string s2 = "race a car";
    cout << "Input: \"" << s1 << "\" - Output: " << (isPalindrome(s1) ? "true" : "false") << endl;
    cout << "Input: \"" << s2 << "\" - Output: " << (isPalindrome(s2) ? "true" : "false") << endl;
    return 0;
}
}