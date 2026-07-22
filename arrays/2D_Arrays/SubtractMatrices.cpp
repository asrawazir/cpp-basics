#include <iostream>
using namespace std;

int main() {
    const int MAX_ROWS = 100;
    const int MAX_COLS = 100;

     int rows1, cols1;
    cout << "Enter the number of rows of the first matrix: ";
    cin >> rows1;
    cout << "Enter the number of columns of the first matrix: ";
    cin >> cols1;

    int rows2, cols2;
    cout << "Enter the number of rows of the second matrix: ";
    cin >> rows2;
    cout << "Enter the number of columns of the second matrix: ";
    cin >> cols2;  

    if (rows1 != rows2 || cols1 != cols2) {
        cout << "\nMatrices must have the exact same dimensions to be subtracted!" << endl;
        return 1;
    }
    return 0;
}
