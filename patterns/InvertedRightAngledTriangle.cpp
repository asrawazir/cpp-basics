#include <iostream>
using namespace std;

int main()
{
    cout << "--- Inverted Right Angled Star Triangle ---" << endl;

    cout << "Enter the number of rows: ";
    int rows;
    cin >> rows;

    for(int i = 0; i < rows; i++){
        for(int j = rows - i; j > 0; j--){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}