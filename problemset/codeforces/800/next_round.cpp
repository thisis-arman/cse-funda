#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end(), greater<int>());

    int count = 0;
    int cutoff = v[k - 1]; 

    for (int i = 0; i < n; i++) {
        if (v[i] > 0 && v[i] >= cutoff) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
