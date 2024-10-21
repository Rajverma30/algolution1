//WAP to count total number of duplicate numbers in an array.
#include <iostream>
using namespace std;
int main(){
    const int size = 10; 
    int numbers[size];
    bool counted[size] = {false}; 
    int duplicateCount = 0;
    cout << "Enter 10 integers: ";
    for (int i = 0; i < size; i++) {
        cin >> numbers[i];
    }
    for (int i = 0; i < size; i++) {
        if (!counted[i]) {
            int count = 0;
            for (int j = 0; j < size; j++) {
                if (numbers[i] == numbers[j]) {
                    count++;
                    if (j != i) {
                        counted[j] = true; 
                    }
                }
            }
            if (count > 1) {
                duplicateCount++; 
            }
        }
    }
    cout << "Total number of duplicate no.: " << duplicateCount << endl;
    return 0;
}