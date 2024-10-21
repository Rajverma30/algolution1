//WAP that takes 7 integers from the user then reverse the order of number in the array,then print the numbers.
#include <iostream>
using namespace std;
int main() {
    const int size = 7;
    int numbers[size];
    cout << "Enter 7 integers: ";
    for (int i = 0; i < size; i++) {
        cin >> numbers[i];
    }
    for (int i = 0; i < size / 2; i++) {
        int temp = numbers[i];
        numbers[i] = numbers[size - 1 - i];
        numbers[size - 1 - i] = temp;
    }
    cout << "reversed order of no.: ";
    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
    return 0;
}