#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int s = 0;
    int d = 0;
    vector<int> nums;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        nums.push_back(n);
    }

    for (int i = 1; i <= t; i++)
    {
        int r = nums.back();
        int l = nums.front();
        if (i % 2 == 1)
        {
            if (r > l)
            {
                s += r;

                nums.pop_back();
                continue;
            }
            else
            {
                s += l;
                nums.erase(nums.begin());
                continue;
            }
        }
        else
        {
            if (r > l)
            {
                d += r;
                nums.pop_back();
            }
            else
            {
                d += l;
                nums.erase(nums.begin());
            }
        }
    }

    cout << s << " " << d;
    return 0;
}