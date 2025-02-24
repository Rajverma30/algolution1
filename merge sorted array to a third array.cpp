#include <iostream>
using namespace std;

int main() {
    int n1, n2;

    cout << "Enter the number of elements in the first sorted array: ";
    cin >> n1;
    int arr1[n1]; 
    cout << "Enter " << n1 << " elements (sorted):" << endl;
    for (int i = 0; i < n1; ++i) {
        cin >> arr1[i];
    }
    cout << "Enter the number of elements in the second sorted array: ";
    cin >> n2;
    int arr2[n2]; 

    cout << "Enter " << n2 << " elements (sorted):" << endl;
    for (int i = 0; i < n2; ++i) {
        cin >> arr2[i];
    }
    int merged[n1 + n2];
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }
    while (i < n1) {
        merged[k++] = arr1[i++];
    }
    while (j < n2) {
        merged[k++] = arr2[j++];
    }
    cout << "Merged sorted array: ";
    for (int i = 0; i < n1 + n2; ++i) {
        cout << merged[i] << " ";
    }
    cout << endl;

    return 0;
}
