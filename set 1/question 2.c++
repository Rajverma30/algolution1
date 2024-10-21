//WAP that takes 5 integers as input from the user and print max of all the numbers
#include <iostream>
using namespace std;
int main() {
    int nums[5];
    cout << "Enter 5 integers: ";
    for (int i = 0; i < 5; i++) {
        cin >> nums[i];
    }
    int maxNumber = nums[0];
    for (int i = 1; i < 5; i++) {
        if (nums[i] > maxNumber) {
            maxNumber = nums[i];
        }
    }
    cout << "Maximum of the entered numbers is: " << maxNumber << endl;
    return 0;
}