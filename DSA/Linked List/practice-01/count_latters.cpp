#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;

    map<char,int> freq;         
    for (char c : str) ++freq[c];

    for (auto [c, n] : freq)
        cout << c << " : " << n << '\n';
}
