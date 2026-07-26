// Reverse stack recursively
#include <iostream>
#include <stack>
using namespace std;

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

void ReverseRecursively(stack<int> &stk)
{
    if (stk.size() == 0)
        return;
    int x = stk.top();
    stk.pop();
    ReverseRecursively(stk);
    cout << x << " ";
    stk.push(x);
}

int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    DisplayRecursively(st);
    cout << endl;
    ReverseRecursively(st);
    return 0;
}