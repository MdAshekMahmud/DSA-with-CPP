#include <iostream>
#include <vector>
using namespace std;

#define MAX 100

class Stack
{
private:
    vector<int> v;

public:
    void push(int val)
    {
        v.push_back(val);
    }

    void pop()
    {
        if (v.size() == 0)
        {
            cout << "Stack Underflow.";
            return;
        }
        v.pop_back();
    }

    int top()
    {
        if (v.size() == 0)
        {
            cout << "Stack Underflow.";
            return -1;
        }
        else
            return v[v.size() - 1];
    }

    int size()
    {
        return v.size();
    }
};

int main()
{
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout << st.top();
    return 0;
}