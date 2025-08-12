#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l={10,20,30};

    l.push_back(40);//to insert at back
    l.push_front(5);// to insert at front
    l.pop_back();// to delete from back
    l.pop_front(); // to delete from front


    l.insert(next(l.begin(),2),100); // from starting in 2 no index it will insert a number

    cout << *next(l.begin(),2)<<endl;

    
    for(auto it :l){
        cout <<it <<endl;
    }
    return 0;
}