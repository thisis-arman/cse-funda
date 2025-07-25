#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    stack<int> st;
    queue<int> q;
    bool status = true;
    if (a != b)
    {
        status = false;
        
    }else{
    while (a--)
    {
        int val;
        cin >> val;
        st.push(val);
    }
    while (b--)
    {
        int val;
        cin >> val;
        q.push(val);
    }
    while (!st.empty())
    {
        if (st.top() != q.front())
        {
            status = false;
            break;
        }
        st.pop();
        q.pop();
    }}
    if (status)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}