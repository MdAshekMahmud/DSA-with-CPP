#include <iostream>
#include <vector>
using namespace std;
void Change(vector<int> &a)
{
    a[0] = 100;
}
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    Change(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}