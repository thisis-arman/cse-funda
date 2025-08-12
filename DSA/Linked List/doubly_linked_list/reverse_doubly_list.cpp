#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_list(Node *&head, Node* &tail, int val) {
    Node *newNode = new Node(val);
    if (head == NULL) {
        head = tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void print(Node *head) {
    Node *temp = head;
    while (temp != NULL) {
        cout << temp->val << endl;
        temp = temp->next;
    }
}

void reverse_print(Node* &head, Node* temp) {
    if (temp->next == NULL) {
        head = temp;
        return;
    }
    reverse_print(head, temp->next);
    temp->next->next = temp;
    temp->next = NULL;
}

int main() {
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true) {
        cin >> val;
        if (val == -1) {
            break;
        }
        insert_list(head, tail, val);
    }
    
    cout << "Before Reverse: Head = " << head->val << ", Tail = " << tail->val << endl;
    print(head);

    reverse_print(head, head);
    tail = head;

    cout << "After Reverse: Head = " << head->val << ", Tail = " << tail->val << endl;
    print(head);

    return 0;
}
