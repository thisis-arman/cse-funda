#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        long long A, B;
        cin >> A >> B;

        if (A == B)
            cout << A + B - 1 << endl;
        else
            cout << A + B << endl;
    }

    return 0;
}
