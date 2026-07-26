#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter the first number : ";
    cin >> a;
    cout << "Enter the second number : ";
    cin >> b;
    cout << "Enter the third number : ";
    cin >> c;

    if (a > b && a > c)
        cout << "Greatest number is = " << a << endl;
    else if (b > c && b > a)
        cout << "Greatest number is = " << b << endl;
    else
        cout << "Greatest number is = " << c << endl;

    return 0;
}