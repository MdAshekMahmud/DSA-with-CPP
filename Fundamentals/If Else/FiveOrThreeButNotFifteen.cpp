#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    if (n % 5 == 0 && n % 3 == 0)
    {
        if (n % 15 != 0)
            cout << "Number is divisible by 5 or 3 but not 15";
        else
            cout << "Number is divisible by 15";
    }
    else
        cout << "The number is not matching the required condition";
    return 0;
}