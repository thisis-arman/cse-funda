#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, X;
        cin >> N >> X;

        int profit = 0;
        for (int i = 1; i <= N; i++) {
            if (i > X)
                profit += (i - X);
        }

        cout << profit << endl;
    }

    return 0;
}
