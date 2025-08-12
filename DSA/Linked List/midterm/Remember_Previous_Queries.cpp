#include <bits/stdc++.h>
using namespace std;

void print_forward(const list<int> &lst)
{
    cout << "L -> ";
    for (const int &val : lst)
    {
        cout << val << " ";
    }
    cout << endl;
}

void print_backward(const list<int> &lst)
{
    cout << "R -> ";
    for (auto it = lst.rbegin(); it != lst.rend(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    int q;
    cin >> q;
    list<int> myList;
    for (int i = 0; i < q; i++)
    {
        int x, v;
        cin >> x >> v;
        int length = myList.size();

        if (x == 0)
        {
            myList.push_front(v);
            print_forward(myList);
            print_backward(myList);
        }
        else if (x == 1)
        {
            myList.push_back(v);
            print_forward(myList);
            print_backward(myList);
        }
        else if (x == 2 && length >= 2)
        {
            if (v == 0)
            {
                myList.pop_front();
                print_forward(myList);
                print_backward(myList);
                return 0;
            }
            auto it = next(myList.begin(), v - 1);
            myList.erase(it);
            print_forward(myList);
            print_backward(myList);
        }else{
            cout << "L -> "<<endl;
            cout << "R -> "<<endl;
        }
    }

    return 0;
}