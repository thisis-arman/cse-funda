#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    priority_queue<int, vector<int>, greater<int>> pq;
    while (q--)
    {
        int val;
        cin >> val;
        pq.push(val);
    }
    int n;
    cin >> n;
    while (n--)
    {
        int val;
        cin >> val;
        if (val == 0)
        {
            int v;
            cin >> v;
            pq.push(v);
            cout << pq.top() << endl;
        }
        else if (val == 1)
        {
            cout << pq.top() << endl;
        }
        else if (val == 2)
        {
            pq.pop();
            if (!pq.empty())
            {
                cout << pq.top() << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
    }

    return 0;
}