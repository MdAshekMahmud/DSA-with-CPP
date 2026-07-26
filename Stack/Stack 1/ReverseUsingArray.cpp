#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int main()
{
    stack<int> st;
    vector<int> v;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    while (!st.empty())
    {
        v.push_back(st.top());
        st.pop();
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    for (int i = 0; i < v.size(); i++)
    {
        st.push(v[i]);
    }
    cout << endl;
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
}