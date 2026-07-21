#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    int matrix1[rows][cols];
    cout << "Enter the elements of the first matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "The first matrix is:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix1[i][j] << " ";
        }
        cout << endl;
    }

    int matrix2[rows][cols];
    cout << "Enter the elements of the second matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix2[i][j];
        }
    }

    cout << "The second matrix is:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix2[i][j] << " ";
        }
        cout << endl;
    }

    int sumMatrix[rows][cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sumMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    return 0;
}