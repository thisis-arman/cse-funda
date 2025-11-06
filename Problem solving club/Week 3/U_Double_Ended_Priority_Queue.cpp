#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q;
    cin >> n >> q;
    deque<int> deq;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        deq.push_back(x);
    }
    for (int i = 0; i < q; i++)
    {
        int y;
        cin >> y;
        if (y == 0)
        {
            int add;
            cin >> add;
            deq.push_back(add);
        }
        sort(deq.begin(), deq.end());
        if (y == 1)
        {
            cout << deq.front() << endl;
            deq.pop_front();
        }
        else if (y == 2)
        {
            cout << deq.back() << endl;
            deq.pop_back();
        }
    }

    return 0;
}