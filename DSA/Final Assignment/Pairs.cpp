#include <bits/stdc++.h>
using namespace std;

class Pair
{
public:
    string name;
    int val;
    Pair(int val, string name)
    {
        this->val = val;
        this->name = name;
    }
};

class cmp
{
public:
    bool operator()(Pair l, Pair r)
    {
        if (l.name > r.name)
            return true;
        else if (l.name < r.name)
            return false;
        else
           return l.val < r.val;
    }
};

int main()
{
    int q;
    cin >> q;
    priority_queue<Pair, vector<Pair>, cmp> pq;
    while (q--)
    {
        string name;
        cin>>  name;
        int val;
        cin >> val;
        Pair obj(val, name);
        pq.push(obj);
    }
    while (!pq.empty())
    {
        cout << pq.top().name << " " << pq.top().val << endl;
        pq.pop();
    }

    return 0;
}