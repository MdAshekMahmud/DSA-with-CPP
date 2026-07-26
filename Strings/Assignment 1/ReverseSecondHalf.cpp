// 4. Input a string of even length and reverse the second half of the string.
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    if (s.size() % 2 != 0)
        cout << "Invalid input." << endl;
    else
    {
        reverse(s.begin() + s.length() / 2, s.end());
        cout << s << endl;
    }
    return 0;
}