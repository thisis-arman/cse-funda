#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> arr(n);
    for (auto &x : arr) cin >> x;

    map<long long, pair<int,int>> occ; 

    for (int i = 0; i < n; i++) {
        long long val = arr[i];
        if (!occ.count(val))
            occ[val] = {i+1, i+1};
        else
            occ[val].second = i+1;
    }

    for (auto &[k, v] : occ) {
        cout << k << " " << v.first << " " << v.second << "\n";
    }
}
