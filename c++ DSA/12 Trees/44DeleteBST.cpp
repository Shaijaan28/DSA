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

    TreeNode* findLastRight(TreeNode* root) {

        if(root->right == NULL)
            return root;

        return findLastRight(root->right);
    }

    TreeNode* helper(TreeNode* root) {

        if(root->left == NULL)
            return root->right;

        if(root->right == NULL)
            return root->left;

        TreeNode* rightChild = root->right;
        TreeNode* lastRight = findLastRight(root->left);

        lastRight->right = rightChild;

        return root->left;
    }

    TreeNode* deleteNode(TreeNode* root, int key) {

        if(root == NULL)
            return NULL;

        if(root->val == key)
            return helper(root);

        if(key < root->val)
            root->left = deleteNode(root->left, key);
        else
            root->right = deleteNode(root->right, key);

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

    //         5
    //       /   \
    //      3     6
    //     / \     \
    //    2   4     7

    TreeNode* root = new TreeNode(5);

    root->left = new TreeNode(3);
    root->right = new TreeNode(60);

    root->left->left = new TreeNode(2);
    root->left->right = new TreeNode(4);

    root->right->right = new TreeNode(7);

    Solution obj;

    root = obj.deleteNode(root, 3);

    cout << "Inorder Traversal after Deletion:\n";
    inorder(root);

    return 0;
}