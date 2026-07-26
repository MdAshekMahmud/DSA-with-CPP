// LeetCode 2744
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;
int main()
{
    unordered_set<string> set;
    vector<string> str;
    str.push_back("cd");
    str.push_back("ac");
    str.push_back("dc");
    str.push_back("ca");
    str.push_back("zz");

    for (int i = 0; i < str.size(); i++)
    {
        set.insert(str[i]);
    }
    int count = 0;
    for (int i = 0; i < str.size(); i++)
    {
        string rev = str[i];
        reverse(rev.begin(), rev.end());
        if (str[i] == rev)
            continue;
        if (set.find(rev) != set.end())
        {
            count++;
            set.erase(str[i]);
        }
    }
    for (string el : set)
    {
        cout << el << " ";
    }
    cout << count << endl;
}