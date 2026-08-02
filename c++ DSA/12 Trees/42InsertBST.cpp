#include <iostream>
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

class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {

        if(root == NULL)
            return new TreeNode(val);

        if(val < root->val)
            root->left = insertIntoBST(root->left, val);
        else
            root->right = insertIntoBST(root->right, val);

        return root;
    }
};

// Inorder Traversal
void inorder(TreeNode* root) {

    if(root == NULL)
        return;

    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

int main() {

    //        4
    //      /   \
    //     2     7
    //    / \
    //   1   3

    TreeNode* root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(7);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);

    Solution obj;

    root = obj.insertIntoBST(root, 5);

    cout << "Inorder Traversal:\n";
    inorder(root);

    return 0;
}