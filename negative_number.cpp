#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];  
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int negativeCount = 0; 
    for (int i = 0; i < n; ++i) {
        if (arr[i] < 0) {
            negativeCount++;
        }
    }
    cout << "Total number of negative numbers: " << negativeCount << endl;

    return 0;
}
