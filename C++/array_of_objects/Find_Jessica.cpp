#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline ( cin, s);
    string word ;
    stringstream ss(s);
    string targeted_word="Jessica";
    bool found =false;
    
    while (ss >> word){
        // cout << targeted_word.size()<<" "<<word.size();
        // cout << word<<endl;
      if(targeted_word.size()==word.size()){
        // cout << "YES";
        for(int i =0;i<word.size();i++){
            // for(int j=0;j<targeted_word.size();j++){
                if(word[i]!=targeted_word[i]){
                    found = false;
                    break;

                }else{
                    found= true;
                    if(i==targeted_word.size()-1){
                        break;
                    }
                }
            // }
        
        }
    }
    }

    // cout << found;
    if(found==true){
        cout << "YES";
    }else{
        cout << "NO";

    }
    return 0;
}