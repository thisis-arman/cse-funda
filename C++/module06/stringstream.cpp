#include <bits/stdc++.h>
using namespace std;

int main()
{
    string sentence;
    getline(cin,sentence);
    // cout<< sentence;
    stringstream new_sentence(sentence);
    string word;

    while (new_sentence >> word){
        cout << word << endl;
    }

    return 0;
}
