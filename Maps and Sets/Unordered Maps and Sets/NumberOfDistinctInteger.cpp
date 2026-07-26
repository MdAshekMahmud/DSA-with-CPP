// LeetCode 2442
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int reverse(int n)
{
    int reverse = 0;
    while (n > 0)
    {
        reverse *= 10;
        reverse += n % 10;
        n /= 10;
    }
    return reverse;
}

int main()
{
    vector<int> v;
    v.push_back(11);
    v.push_back(22);
    v.push_back(33);
    v.push_back(44);
    v.push_back(33);
    v.push_back(55);
    v.push_back(55);
    v.push_back(55);
    v.push_back(55);
    v.push_back(55);
    v.push_back(666);

    unordered_set<int> s;
    for (int i = 0; i < v.size(); i++)
    {
        s.insert(v[i]);
        s.insert(reverse(v[i]));
    }
    cout << s.size() << endl;

    for (int element : s)
    {
        cout << element << " ";
    }

    return 0;
}