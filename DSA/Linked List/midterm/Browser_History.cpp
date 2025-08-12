#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<string> myList;
    string s;
    while (cin >> s && s != "end")
    {
        myList.push_back(s);
    }

    auto it = myList.begin();
    int q;
    cin >> q;
    cin.ignore();
    string line;
    while (q--)
    {
        getline(cin, line);

        if (line.substr(0, 5) == "visit")
        {
            string path = line.substr(6);
            auto found = find(myList.begin(), myList.end(), path);
            if (found != myList.end())
            {
                it = found;
                cout << *it << endl;
            }
            else
            {
                cout << "Not Available" <<endl;
            }
        }
        else if (line == "next")
        {
            auto nxt = next(it);
            if (nxt != myList.end())
            {
                it = nxt;
                cout << *it << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (line == "prev")
        {
            if (it != myList.begin())
            {
                --it;
                cout << *it << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
    }

    return 0;
}