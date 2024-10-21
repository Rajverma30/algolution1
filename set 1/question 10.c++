#include <iostream>
using namespace std;
void printParallelogram(int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows - i - 1; j++) {
            cout << " ";
        }
        for (int j = 0; j < columns; j++) {
            cout << "*";
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
    printParallelogram(rows, columns);
    return 0;
}