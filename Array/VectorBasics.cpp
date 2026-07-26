#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v[1] = 2;
    v[2] = 3;
    cout << v[0];
    cout << v[1];
    cout << v[2];
}