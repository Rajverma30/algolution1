//Half diamond
#include <iostream>
using namespace std;
void printHalfDiamond(int columns) {
    for (int i = 1; i <= columns; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl; 
    }
    for (int i = columns - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}
int main() {
    int columns;
    cout << "Enter number of columns: ";
    cin >> columns;
    printHalfDiamond(columns);
    return 0;
}