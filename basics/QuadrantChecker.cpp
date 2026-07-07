#include <iostream>
using namespace std;

int main()
{
    cout << "--- Quadrant Checker ---" << endl;
    int x, y;
    cout << "Enter x coordinate: ";
    cin >> x;
    cout << "Enter y coordinate: ";
    cin >> y;

    cout << "(" << x << ", " << y << ")" << endl;
    
    if(x > 0 && y > 0)
    {
        cout << "The point is in the first(I) quadrant." << endl;
    }
    else if(x < 0 && y > 0)
    {
        cout << "The point is in the second(II) quadrant." << endl;
    }
    else if(x < 0 && y < 0)
    {
        cout << "The point is in the third(III) quadrant." << endl;
    }
    else if(x > 0 && y < 0)
    {
        cout << "The point is in the fourth quadrant." << endl;
    }
    else if(x == 0 && y == 0) 
    {
        cout << "The point is at origin." << endl;
    } 
    else if (x == 0) 
    {
        cout << "The point is on the Y-axis." << endl;
    } 
    else if (y == 0) 
    {
        cout << "The point is on the X-axis." << endl;
    }

    return 0;
}