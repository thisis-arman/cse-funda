#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    int marks;
    int roll;
    string name;
    Student(string name, int roll, int marks) {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

class cmp {
public:
    bool operator()(const Student &l, const Student &r) {
        if (l.marks != r.marks)
            return l.marks < r.marks; 
        return l.roll > r.roll;     
    }
};

int main() {
    int q;
    cin >> q;
    priority_queue<Student, vector<Student>, cmp> pq;

    for (int i = 0; i < q; i++) {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        pq.push(Student(name, roll, marks));
    }

    int n;
    cin >> n;
    while (n--) {
        int val;
        cin >> val;
        if (val == 0) {
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            pq.push(Student(name, roll, marks));
            if (!pq.empty())
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
            else
                cout << "Empty" << endl;
        }
        else if (val == 1) {
            if (!pq.empty())
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
            else
                cout << "Empty" << endl;
        }
        else if (val == 2) {
            if (!pq.empty()) pq.pop();
            if (!pq.empty())
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
            else
                cout << "Empty" << endl;
        }
    }
    return 0;
}
