#include <bits/stdc++.h>
using namespace std;
class ListNode
{
public:
    string str;
    ListNode *next;
    ListNode *prev;
    ListNode(string str)
    {
        this->str = str;
        this->next = NULL;
        this->prev = NULL;
    }
};

int main()
{
    string str;
    getline(cin, str);
    int q;
    cin >> q;

    stringstream s(str);
    string word;
    while (s >> word)
    {
        for(int i =0;i<q;i++){
            string history ;
            cin>>history;
        }
    }
    return 0;
}