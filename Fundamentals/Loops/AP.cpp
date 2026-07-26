// Display AP-100,97,94,...upto all terms which are positive
#include <iostream>
using namespace std;

int main()
{
    int a = 100;
    for (int i = 1; a > 0; i++)
    {
        cout << a << " ";
        a -= 3;
    }
    return 0;
}