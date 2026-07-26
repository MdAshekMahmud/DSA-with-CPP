#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, int> m;
    m[1] = 10;
    m[5] = 50;
    m[3] = 30;

    for (auto ele : m)
    {
        cout << ele.first << " " << ele.second << endl;
    }

    map<string, int> m2;
    m2["Ashek"] = 854;
    m2["Russell"] = 756;

    for (auto ele : m2)
    {
        cout << ele.first << " " << ele.second << endl;
    }
}