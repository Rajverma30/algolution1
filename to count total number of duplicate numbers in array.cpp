#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];  
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    
    int duplicateCount = 0; 
    bool counted[n] = {false}; 

    for (int i = 0; i < n; ++i) {
        if (!counted[i]) {
            int count = 1;  
            for (int j = i + 1; j < n; ++j) {
                if (arr[i] == arr[j]) {
                    count++;
                    counted[j] = true;  
                }
            }

            if (count > 1) {
                duplicateCount++;
            }
        }
    }
    cout << "Total number of duplicate numbers: " << duplicateCount << endl;

    return 0;
}
