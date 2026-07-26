// Push element at bottom recursively
#include <iostream>
#include <stack>
using namespace std;

void PushAtBottom(stack<int> &stk, int value)
{
    if (stk.size() == 0)
    {
        stk.push(value);
        return;
    }
    int x = stk.top();
    stk.pop();
    PushAtBottom(stk, value);
    stk.push(x);
}
void DisplayRecursively(stack<int> &stk)
{
    if (stk.size() == 0)
        return;
    int x = stk.top();
    cout << x << " ";
    stk.pop();
    DisplayRecursively(stk);
    stk.push(x);
}

int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    int value;
    cout << "Enter data : ";
    cin >> value;
    PushAtBottom(st, value);
    DisplayRecursively(st);
    return 0;
}