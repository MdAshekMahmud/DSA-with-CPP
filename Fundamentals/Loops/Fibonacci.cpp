#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    int a = 0;
    int b = 1;
    cout << "Fibonacci sequence : " << a << " " << b << " ";
    for (int i = 2; i < n; i++)
    {
        int sum = a + b;
        cout << sum << " ";
        a = b;
        b = sum;
    }
    cout << endl;
    return 0;
}