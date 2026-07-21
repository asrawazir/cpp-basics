#include <iostream>
using namespace std;

int main() {
    int rows1, cols1;
    cout << "Enter the number of the first matrix rows: ";
    cin >> rows1;
    cout << "Enter the number of the first matrix columns: ";
    cin >> cols1;

    int matrix1[rows1][cols1];
    cout << "Enter the elements of the first matrix:" << endl;
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            cin >> matrix1[i][j];
        }
    }

    int rows2, cols2;
    cout << "Enter the number of the second matrix rows: ";
    cin >> rows2;
    cout << "Enter the number of the second matrix columns: ";
    cin >> cols2;

    int matrix2[rows2][cols2];
    cout << "Enter the elements of the second matrix:" << endl;
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            cin >> matrix2[i][j];
        }
    }

    int sumMatrix[rows1][cols1];
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            sumMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    cout << "The sum of the two matrices is:" << endl;
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            cout << sumMatrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}