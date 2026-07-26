// WAP to check if a number is prime or not
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    int a = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            a = 1;
            break;
        }
    }

    if (n == 1)
        cout << "1 is neither prime nor composite." << endl;
    else if (a == 0)
        cout << "The given number is prime." << endl;
    else
        cout << "The given number is composite." << endl;
    return 0;
}