#include <iostream>
using namespace std;

int main() {
    int n, searchNumber;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];  

    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    cout << "Enter the number to search: ";
    cin >> searchNumber;

    bool found = false; 
    for (int i = 0; i < n; ++i) {
        if (arr[i] == searchNumber) {
            found = true;
            cout << "Number " << searchNumber << " found at index " << i << "." << endl;
            break; 
        }
    }
    if (!found) {
        cout << "Number " << searchNumber << " not found in the array." << endl;
    }

    return 0;
}
