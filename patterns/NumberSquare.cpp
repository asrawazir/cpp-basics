#include <iostream>
using namespace std;

int main()
{
    cout << "--- Number Square ---" << endl;

    cout << "Enter the number of rows: ";
    int rows;
    cin >> rows;

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < rows; j++){
            cout << j + 1 << " ";
        }
        cout << endl;
    }
    return 0;
}