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

    if (cols1 != rows2) {
        cout << "Columns of the first matrix must match rows of the second matrix!" << endl;
        return 1;
    }

    int A[MAX_ROWS][MAX_COLS];
    cout << "Enter elements of the first matrix (" << rows1 << "x" << cols1 << "):" << endl;
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            cin >> A[i][j];
        }
    }

    int B[MAX_ROWS][MAX_COLS];
    cout << "Enter elements of the second matrix (" << rows2 << "x" << cols2 << "):" << endl;
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            cin >> B[i][j];
        }
    }

    int C[MAX_ROWS][MAX_COLS];
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            C[i][j] = 0; // Initialize cell
            for (int k = 0; k < cols1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << "Resultant Matrix (" << rows1 << "x" << cols2 << "):" << endl;
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}