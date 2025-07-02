#include <bits/stdc++.h>
using namespace std;

int main()
{
    string name="alex";
    cout << name.size() << endl;
    cout << name.max_size()<< endl;
    cout << name.capacity() << endl;
    name.resize(3);
    cout << name <<endl;
    cout <<name.empty() <<endl;
    cout << name <<endl;


    return 0;
}