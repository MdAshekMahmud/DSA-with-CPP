// Vectors are pass by value (Not by refrence like array), We need to use & "De refrence"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void change(vector<int> &a)
{
    a[0] = 100;
    for (int i = 0; i < a.size(); i++)
    {
        cout << a.at(i) << " ";
    }
    cout << endl;
}
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
    cout << endl;
    change(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
}