#include <bits/stdc++.h>
using namespace std;

int GCD(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        vector<pair<int, int>> players; 

        for (int i = 1; i <= N; i++)
        {
            players.push_back({i, GCD(i, N)});
        }
        sort(players.begin(), players.end(), [](auto &a, auto &b)
             {
                 if (a.second == b.second)
                     return a.first < b.first;
                 return a.second > b.second;
             });

        for (int i = 0; i < N; i++)
        {
            cout << players[i].first;
            if (i < N - 1)
                cout << " ";
        }
        cout << "\n";
    }

    return 0;
}
