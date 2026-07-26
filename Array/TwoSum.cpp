// Find the doublets in the array whose sum is equal to the given value x.
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    int x;
    cout << "Enter target : ";
    cin >> x;
    int n;
    cout << "Enter array size : ";
    cin >> n;

    cout << "Enter array element : ";
    for (int i = 0; i < n; i++)
    {
        int q;
        cin >> q;
        v.push_back(q);
    }
    for (int i = 0; i < v.size() - 1; i++)
    {
        for (int j = i + 1; j < v.size(); j++)
        {
            if (v[i] + v[j] == x)
            {
                cout << "(" << i << "," << j << ")" << endl;
            }
        }
    }
    return 0;
}