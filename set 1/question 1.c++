//WAP to count total number of negative numbers in an array.
#include <iostream>
using namespace std;
int main() {
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    int negativeCount = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            negativeCount++;
        }
    }
    cout << "Total number of negative no.: " << negativeCount << endl;
����return�0;
}