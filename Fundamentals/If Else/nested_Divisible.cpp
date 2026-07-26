// Take a positive integer and tell if it is divisible by 5 and 3
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n % 5 == 0)
    {
        if (n % 3 == 0)
        {
            cout << "The number is divisible by 5 and 3" << endl;
        }
        else
        {
            cout << "The number is divisible by 5 but not by 3" << endl;
        }
    }
    else
    {
        if (n % 3 == 0)
        {
            cout << "The number is divisible by 3 but not by 5" << endl;
        }
        else
        {
            cout << "The number is not divisible by 5 and 3" << endl;
        }
    }
    return 0;
}