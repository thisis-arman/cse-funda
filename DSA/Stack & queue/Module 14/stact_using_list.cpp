#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    vector<int> l;
    void push(int val)
    {
        l.push_back(val); // O(1)
    }
    void pop()
    {
        l.pop_back();// O(1)
    }
    int size()
    {
        return l.size();// O(1)
    }
    bool empty()
    {
        return l.empty();// O(1)
    }
    int top()
    {
        return l.back();// O(1)
    }
};
int main()
{
    myStack st;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    while (!st.empty())
    {
        cout << st.top() <<" ";
        st.pop();
    }
    return 0;
}