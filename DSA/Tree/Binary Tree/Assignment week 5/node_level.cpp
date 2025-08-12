#include <bits/stdc++.h>
using namespace std;
class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};

TreeNode *input_tree()
{
    int val;
    cin >> val;
    TreeNode *root = new TreeNode(val);
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty())
    {
        TreeNode *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        TreeNode *myLeft, *myRight;
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new TreeNode(l);
        if (r == -1)
            myRight = NULL;
        else
            myRight = new TreeNode(r);

        p->left = myLeft;
        p->right = myRight;

        if (p->left)
        {
            q.push(p->left);
        }

        if (p->right)
        {
            q.push(p->right);
        }
    }
    return root;
}

void node_level(TreeNode* root, int level){
    if (root == NULL) return;

    queue<pair<TreeNode*, int>> q;
    q.push({root, 0}); 

    while (!q.empty()) {
        pair<TreeNode*, int> p = q.front();
        q.pop();
        TreeNode* node= p.first;
        int lvl= p.second;
        if (lvl == level) {
            cout << node->val << " ";
        }

        if (node->left)
            q.push({node->left, lvl + 1});
        if (node->right)
            q.push({node->right, lvl + 1});
    }
}

int max_depth(TreeNode* root){
    if(root==NULL)return 0;
    int l = max_depth(root->left);
    int r = max_depth(root->right);
    return max(l,r)+1;
}
int main()
{
    TreeNode* root = input_tree();
    int mx= max_depth(root);
    int level;
    cin>>level;
    if(level>=mx)cout <<"Invalid";
    else node_level(root,level);
    return 0;
}