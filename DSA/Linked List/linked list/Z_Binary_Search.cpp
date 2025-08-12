#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < q; i++)
    {
        int num;
        cin >> num;
        int l = 0;
        int r = n - 1;
        bool is_found = false;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (v[mid] == num)
            {
                is_found = true;
                break;
            }
            else if (v[mid] > num)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        if (is_found == true)
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
    }

    return 0;
}