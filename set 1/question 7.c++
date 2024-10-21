/WAP to print all unique numbers in an array.
#include <iostream>
using namespace std;
int main() {
    const int size = 10; 
    int numbers[size];
    bool isUnique;
    cout << "Enter 10 integers: ";
    for (int i = 0; i < size; i++) {
        cin >> numbers[i];
    }
    cout << "Unique numbers in the array: ";
    for (int i = 0; i < size; i++) {
        isUnique = true; 
        for (int j = 0; j < size; j++) {
            if (i != j && numbers[i] == numbers[j]) {
                isUnique = false; 
                break;
            }
        }
          if (isUnique) {
            cout << numbers[i] << " ";
        }
    }
    cout << endl;
    return 0;
}