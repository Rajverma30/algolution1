//print right trangle pattern with the help of function.
#include <iostream>
using namespace std;
void printRightTriangle(int rows) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl; 
    }
}
int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;
    printRightTriangle(rows);
    return 0;
}