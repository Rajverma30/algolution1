//Print following pattern
//12345
//23455
//34555
//45555
//55555
#include <iostream>
using namespace std;
void printPattern(int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 1; j <= rows; j++) {
            if (j <= i) {
                cout << rows; 
            } else {
                cout << j + i;
            }
        }
        cout << endl;
    }
}
int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;
    printPattern(rows);
    return 0;
}