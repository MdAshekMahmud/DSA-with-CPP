#include <unordered_map>
#include <iostream>
using namespace std;
int main()
{
    // pair<string, int> p;
    // p.first = "Ashek Mahmud";
    // p.second = 854;
    // cout << p.first << " " << p.second << endl;
    // unordered_map <key, value>
    unordered_map<string, int> m;
    pair<string, int> p1;
    p1.first = "Ashek";
    p1.second = 854;
    m.insert(p1);

    pair<string, int> p2;
    p2.first = "Limon";
    p2.second = 234;
    m.insert(p2);

    pair<string, int> p3;
    p3.first = "Rifat";
    p3.second = 432;
    m.insert(p3);

    // Another method of insert
    m["Sabur"] = 123;

    // for (pair<string, int> ele : m)
    for (auto ele : m)
    {
        cout << ele.first << " " << ele.second << endl;
    }
    cout << "Size : " << m.size() << endl;
    cout << endl;

    m.erase("Sabur");
    m.erase("Limon");

    for (auto ele : m)
    {
        cout << ele.first << " " << ele.second << endl;
    }
    cout << "Size : " << m.size();
}