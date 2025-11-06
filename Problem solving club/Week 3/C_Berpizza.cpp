#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;

    queue<int> fifo;
    priority_queue<pair<int, int>> mx;
    vector<bool> served(q + 1, false);

    int id = 1; 

    while (q--) {
        int type;
        cin >> type;

        if (type == 1) {
            int m;
            cin >> m;
            fifo.push(id);
            mx.push({m, -id}); 
            id++;
        }
        else if (type == 2) {
            while (served[fifo.front()]) {
                fifo.pop();
            }
            int c = fifo.front();
            fifo.pop();
            served[c] = true;
            cout << c << ' ';
        }
        else { 
            while (served[-mx.top().second]) {
                mx.pop();
            }
            int c = -mx.top().second;
            mx.pop();
            served[c] = true;
            cout << c << ' ';
        }
    }
    return 0;
}
