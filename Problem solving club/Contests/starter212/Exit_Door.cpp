#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;
        vector<int> P(N);
        for (int i = 0; i < N; i++)
            cin >> P[i];

        int tb = 0;
        for (int person = N; person >= 1; person--)
        {
            int idx = find(P.begin(), P.end(), person) - P.begin();

            int left = 0, right = 0;
            for (int i = 0; i < idx; i++)
                if (P[i] != -1)
                    left++;
            for (int i = idx + 1; i < N; i++)
                if (P[i] != -1)
                    right++;

            tb += min(left, right);
            P[idx] = -1;
        }

        cout << tb << "\n";
    }

    return 0;
}
