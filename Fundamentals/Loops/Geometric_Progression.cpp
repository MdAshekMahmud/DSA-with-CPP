// Display the Geometric Progression (GP) - 1,2,4,8,16,32,...upto 'n' terms
//  GP  an = ar^(n-1)
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        cout << a << " ";
        a *= 2;
    }

    return 0;
}