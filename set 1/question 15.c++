/print following pattern
//11111
//10001
//10001
//10001
//11111
#include <iostream>
using namespace std;
void printPattern(int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1) {
                cout << "1";
            } else {
                cout << "0";
            }
        }
        cout << endl; 
    }
}
int main() {
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;
    printPattern(rows, cols);
    return 0;
}