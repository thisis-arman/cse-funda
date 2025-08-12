#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int>v; // type 1
    // vector<int>v(5); / type 2
    int a=9;
    vector<int> v(a); //type 3
    
    int arr[]={1,2,3,4,5};
    int n=5;
    vector<int> myvector(arr, arr+n);// type 4
    //1 2 3 4 5
    vector<int> v2(myvector);

    vector<int> nums(5,2);
    //2 2 2 2 2

    for(int i =0;i<n;i++){
        cout<<  nums[i] << " ";
    }

    cout<< v2.size();
    return 0;
}