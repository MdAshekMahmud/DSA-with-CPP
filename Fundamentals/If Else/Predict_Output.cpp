#include <iostream>
using namespace std;
int main()
{
    int a = 5, b, c;
    b = a = 15;
    c = a < 15;
    cout << "a = " << a << endl
         << "b = " << b << endl
         << "c = " << c << endl;

    return 0;
}