#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int marks;
    int roll;
    string name;
    Student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

class cmp
{
public:
    bool operator()(Student l, Student r)
    {
        if (l.marks < r.marks)
        {
            return true;
        }
        if (l.marks> r.marks)
        {
            return false;
        }

        return l.roll > r.roll;
    }
};

int main()
{
    int q;
    cin >> q;
    priority_queue<Student, vector<Student>, cmp> pq;
    while (q--)
    {
        string name;
        int roll, marks;
        cin >> name;
        cin >> roll >> marks;
        Student obj(name, roll, marks);
        pq.push(obj);
    }
    int n;
    cin >> n;
    while (n--)
    {
        int val;
        cin >> val;
        
        if (val == 0)
        {
            string name;
            int roll, marks;
            cin >> name;
            cin >> roll >> marks;
            Student obj(name, roll, marks);
            pq.push(obj);
            cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
            // pq.pop();
        }
        else if (val == 1)
        {
            cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
        }
        else if (val == 2)
        {
            pq.pop();
            if (!pq.empty())
            {
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
    }
    return 0;
}
