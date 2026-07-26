#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    int i = 1, sum = 1;
    while (i <= n)
    {
        sum *= i;
        i++;
    }
    cout << "Factorial is = " << sum << endl;
    return 0;
}