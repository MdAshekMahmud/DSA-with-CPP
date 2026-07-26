#include <iostream>

using namespace std;

int main()
{
    double x1, y1, x2, y2, x3, y3;
    cout << "x1=  ";
    cin >> x1;
    cout << "y1= ";
    cin >> y1;
    cout << "x2=  ";
    cin >> x2;
    cout << "y2=  ";
    cin >> y2;
    cout << "x3=  ";
    cin >> x3;
    cout << "y3=  ";
    cin >> y3;

    // Check if the points are collinear using the area of the triangle method
    double m1 = (y2 - y1) / (x2 - x1);
    double m2 = (y3 - y2) / (x3 - x2);

    if (m1 == m2)
    {
        cout << "Points are on one straight line\n";
    }
    else
    {
        cout << "Points are not on one straight line\n";
    }

    return 0;
}