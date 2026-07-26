// 5. Input a string of length less than 10 and convert it into integer without using builtin function.
#include <iostream>
#include <string>
using namespace std;

int main()
{
    char s[10];
    cin >> s;
    int len = 0;
    while (s[len] != '\0')
        len++;

    for (int i = 0; i < len; i++)
    {
        if (s[i] == '0' || s[i] == '1' || s[i] == '2' || s[i] == '3' || s[i] == '4' || s[i] == '5' || s[i] == '6' || s[i] == '7' || s[i] == '8' || s[i] == '9')
            cout << (int)s[i] - 48;
        else
            cout << (int)s[i] << " ";
    }

    return 0;
}