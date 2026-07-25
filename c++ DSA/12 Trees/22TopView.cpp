#include <iostream>
#include <vector>
#include <queue>
#include <map>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = NULL;
        right = NULL;
    }
};

vector<int> topView(TreeNode* root) {

    vector<int> ans;

    if(root == NULL)
        return ans;

    map<int, int> mp;

    queue<pair<TreeNode*, int>> q;

    q.push({root, 0});

    while(!q.empty()) {

        TreeNode* node = q.front().first;
        int line = q.front().second;
        q.pop();

        // Store only the first node of every vertical line
        if(mp.find(line) == mp.end())
            mp[line] = node->val;

        if(node->left)
            q.push({node->left, line - 1});

        if(node->right)
            q.push({node->right, line + 1});
    }

    for(auto it : mp)
        ans.push_back(it.second);

    return ans;
}

int main() {

    //          1
    //        /   \
    //       2     3
    //        \   / \
    //         4 5   6

    TreeNode* root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    root->left->right = new TreeNode(4);

    root->right->left = new TreeNode(5);
    root->right->right = new TreeNode(6);

    vector<int> ans = topView(root);

    cout << "Top View: ";

    for(int x : ans)
        cout << x << " ";

    cout << endl;

    return 0;
}