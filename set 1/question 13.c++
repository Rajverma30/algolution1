// print Diamond
#include <iostream>
using namespace std;
bool printDiamond(int rows) {
    if (rows % 2 == 0) {
        cout << "Number of rows must be odd." << endl;
        return false;
    }
    int mid = rows / 2;
    for (int i = 0; i <= mid; i++) {
        for (int j = 0; j < mid - i; j++) {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }
        cout << endl; 
    }
    for (int i = mid - 1; i >= 0; i--) {
        for (int j = 0; j < mid - i; j++) {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }
        cout << endl; 
    }
    return true;
}
int main() {
    int rows;
    cout << "Enter an odd number of rows: ";
    cin >> rows;
    if (printDiamond(rows)) {
        cout << "Diamond printed successfully." << endl;
    }
    return 0;
}