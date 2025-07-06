#include <bits/stdc++.h>
using namespace std;

void fun(int* &p)
{
    int y = 50;
    p = &y;

    cout << "from fun => " << &p << endl;
}

int main()
{

    int x = 100;
    int* p = &x;

    fun(p);

    cout << "FROM MAIN =>" << &p << endl;
    return 0;
}