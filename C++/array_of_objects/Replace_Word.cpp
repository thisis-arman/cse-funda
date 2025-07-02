#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        string first_word;
        string second_word;
        cin >> first_word;
        cin >> second_word;
        
        string result = "";
        int j = 0;
        
        while(j < first_word.size())
        {
            bool found = true;
            
            if(j + second_word.size() > first_word.size()) {
                found = false;
            } else {
                for(int k = 0; k < second_word.size(); k++) {
                    if(first_word[j + k] != second_word[k]) {
                        found = false;
                        break;
                    }
                }
            }
            
            if(found) {
                result += '#';
                j += second_word.size();
            } else {
                result += first_word[j];
                j++;
            }
        }
        
        cout << result << endl;
    }
    return 0;
}