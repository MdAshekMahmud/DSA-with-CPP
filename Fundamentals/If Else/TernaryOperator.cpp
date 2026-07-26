#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 20;
    int max;

    // Use the ternary operator to find the maximum of two numbers
    max = (a > b) ? a : b;

    cout << "The maximum of " << a << " and " << b << " is " << max << endl;

    return 0;
}
