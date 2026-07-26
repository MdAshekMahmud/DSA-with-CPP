#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "Enter the coordinates : ";
    cin >> x >> y;
    if (x == 0 && y == 0)
        cout << "The point is on origin." << endl;
    else if (x == 0)
        cout << "Point lies on y-axis." << endl;
    else if (y == 0)
        cout << "Point lies on x-axis." << endl;
    else
        cout << "The point does not lie on x or y axis." << endl;

    return 0;
}