#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter element ";
        int n;
        cin >> n;
        v.push_back(n);
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }

    sort(v.begin(), v.end());
    cout << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
}