#include <bits/stdc++.h>
using namespace std;

int *p;
int fun(){
    int x = 10;
    p = &x;
    cout << "Fun ->" <<*p << endl;
    return x;
}

int main()
{
    fun();
    cout <<"main  ->"<< *p << endl;
}