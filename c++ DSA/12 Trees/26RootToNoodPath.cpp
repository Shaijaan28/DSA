#include <iostream>
#include <vector>
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

// Returns true if target is found
bool getPath(TreeNode* root, vector<int>& path, int target) {

    if(root == NULL)
        return false;

    // Add current node to path
    path.push_back(root->val);

    // Target found
    if(root->val == target)
        return true;

    // Search left or right subtree
    if(getPath(root->left, path, target) ||
       getPath(root->right, path, target))
        return true;

    // Backtrack
    path.pop_back();

    return false;
}

int main() {

    //         1
    //       /   \
    //      2     3
    //     / \   / \
    //    4   5 6   7

    TreeNode* root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    int target = 5;

    vector<int> path;

    if(getPath(root, path, target)) {

        cout << "Root to Node Path: ";

        for(int x : path)
            cout << x << " ";

        cout << endl;
    }
    else {
        cout << "Target node not found." << endl;
    }

    return 0;
}