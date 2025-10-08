#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    int arr[105];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int op = 0;

    for (int i = 0; i < x; i++) {
        bool found = false;
        for (int j = 0; j < n; j++) {
            if (arr[j] == i) {
                found = true;
                break;
            }
        }
        if (!found) op++;
    }

    bool hasX = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            hasX = true;
            break;
        }
    }

    if (hasX) op++; 
    cout << op << endl;
    return 0;
}
