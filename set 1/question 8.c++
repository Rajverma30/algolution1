//WAP to count frequency of each number in an array.
#include <iostream>
using namespace std;
int main() {
    const int size = 10; 
    int numbers[size];
    int frequency[size] = {0}; 
    bool counted[size] = {false}; 
    cout << "Enter 10 integers: ";
    for (int i = 0; i < size; i++) {
        cin >> numbers[i];
    }
    for (int i = 0; i < size; i++) {
        if (!counted[i]) {
            int count = 1; 
            for (int j = i + 1; j < size; j++) {
                if (numbers[i] == numbers[j]) {
                    count++;
                    counted[j] = true; 
                }
            }
            frequency[i] = count;
        }
    }
    cout << "Number Frequencies:\n";
    for (int i = 0; i < size; i++) {
        if (!counted[i] && frequency[i] > 0) {
            cout << numbers[i] << ": " << frequency[i] << endl;
        }
    }
    return 0;
}