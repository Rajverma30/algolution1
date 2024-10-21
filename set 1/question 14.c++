//print following pattern
//12345
//54321
//12345
//54321
//12345
#include <iostream>
using namespace std;
void printPattern(int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        if (i % 2 == 0) {
            for (int j = 1; j <= columns; j++) {
                cout << j;
            }
        } else {
            for (int j = columns; j >= 1; j--) {
                cout << j;
            }
        }
        cout << endl;
    }
}
int main() {
    int rows, columns;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> columns;
    printPattern(rows, columns);
    return 0;
}