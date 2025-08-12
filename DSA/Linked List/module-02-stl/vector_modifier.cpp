#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 5, 2, 3, 4, 5};
    // replace(v.begin(), v.end(), 5, 0);
    auto it = find(v.begin(),v.end(),5);

    if(it ==v.end()){
        cout <<"Not Found ";
    }else{
        cout <<"Found ";
    }
    // for (int x : v)
    // {
    //     cout << x << " ";
    // }
    return 0;
}