#include <bits/stdc++.h>

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

int height(TreeNode* root) {

    if(root == NULL)
        return 0;

    int left = height(root->left);

    if(left == -1)
        return -1;

    int right = height(root->right);

    if(right == -1)
        return -1;

    if(abs(left - right) > 1)
        return -1;

    return 1 + max(left, right);
}

bool isBalanced(TreeNode* root) {

    return height(root) != -1;
}

int main() {

    // Balanced Tree
    //
    //         1
    //        / \
    //       2   3
    //      / \
    //     4   5
    //

    TreeNode* root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    if(isBalanced(root))
        cout << "Balanced Binary Tree" << endl;
    else
        cout << "Not a Balanced Binary Tree" << endl;

    return 0;
}