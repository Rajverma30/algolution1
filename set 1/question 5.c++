//WAP that takes 5 integers as input from the user and find out if the order of numbers in array is palindrome.
#include <iostream>
using namespace std;
int main() {
    const int size = 5;
    int numbers[size];
    cout << "Enter 5 integers: ";
    for (int i = 0; i < size; i++) {
        cin >> numbers[i];
    }
    bool isPalindrome = true;
    for (int i = 0; i < size / 2; i++) {
        if (numbers[i] != numbers[size - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }
    if (isPalindrome) {
        cout << "In palindrome order." << endl;
    } else {
        cout << " Not in palindrome order." << endl;
    }
    return 0;
}