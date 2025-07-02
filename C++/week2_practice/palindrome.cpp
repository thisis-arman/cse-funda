#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>> s;
    bool isPalindrome =true;
    int j=s.size()-1;
    for(int i =0;i<s.size();i++){

        if(s[i]!=s[j]){
            isPalindrome =false;
            
        }
        j--;

    }
   if(isPalindrome==true){
    cout << "YES";
   }else{
    cout << "NO";
   }

    return 0;
}