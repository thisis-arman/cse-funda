#include <bits/stdc++.h>
using namespace std;

class TreeNode {
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

TreeNode *input_tree() {
    int val;
    cin >> val;
    if (val == -1) return NULL;

    TreeNode *root = new TreeNode(val);
    queue<TreeNode *> q;
    q.push(root);

    while (!q.empty()) {
        TreeNode *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        if (l != -1) {
            p->left = new TreeNode(l);
            q.push(p->left);
        }
        if (r != -1) {
            p->right = new TreeNode(r);
            q.push(p->right);
        }
    }
    return root;
}


void left_side(TreeNode *node, vector<int> &res) {
    TreeNode *tmp = node->left;
    while (tmp) {
        if (tmp->left || tmp->right) res.push_back(tmp->val);
        if (tmp->left) tmp = tmp->left;
        else tmp = tmp->right;
    }
}


void right_side(TreeNode *node, vector<int> &temp) {
    TreeNode *tmp = node->right;
    while (tmp) {
        if (tmp->left || tmp->right) temp.push_back(tmp->val);
        if (tmp->right) tmp = tmp->right;
        else tmp = tmp->left;
    }
}

void inOrder(TreeNode *node, vector<int> &result) {
    if (!node) return;
    inOrder(node->left, result);
    if (!node->left && !node->right) result.push_back(node->val);
    inOrder(node->right, result);
}

int main() {
    TreeNode *root = input_tree();
    vector<int> res;

    if (!root) return 0;

    if (root->left || root->right) res.push_back(root->val);

    left_side(root, res);

    inOrder(root, res);

    vector<int> right;
    right_side(root, right);
    reverse(right.begin(), right.end());
    for (int val : right) {
        res.push_back(val);
    }

    for (int val : res) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
