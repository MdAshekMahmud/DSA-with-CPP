#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;

    if (number < 0)
    {
        cout << "Please enter a positive integer." << endl;
    }
    else
    {
        if (number % 2 == 0)
        {
            cout << number << " is even." << endl;
        }
        else
        {
            cout << number << " is odd." << endl;
        }
    }

    return 0;
}
