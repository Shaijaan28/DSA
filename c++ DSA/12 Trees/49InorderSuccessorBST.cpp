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

    TreeNode* predecessor(TreeNode* root, int key) {

        TreeNode* pred = NULL;

        while(root) {

            if(root->val < key) {
                pred = root;
                root = root->right;
            }
            else {
                root = root->left;
            }
        }

        return pred;
    }

    TreeNode* successor(TreeNode* root, int key) {

        TreeNode* succ = NULL;

        while(root) {

            if(root->val > key) {
                succ = root;
                root = root->left;
            }
            else {
                root = root->right;
            }
        }

        return succ;
    }
};

int main() {

    //         8
    //       /   \
    //      4     12
    //     / \    / \
    //    2   6  10 14

    TreeNode* root = new TreeNode(8);

    root->left = new TreeNode(4);
    root->right = new TreeNode(12);

    root->left->left = new TreeNode(2);
    root->left->right = new TreeNode(6);

    root->right->left = new TreeNode(10);
    root->right->right = new TreeNode(14);

    Solution obj;

    int key = 8;

    TreeNode* pred = obj.predecessor(root, key);
    TreeNode* succ = obj.successor(root, key);

    cout << "Predecessor = " << pred->val << endl;
    cout << "Successor = " << succ->val << endl;

    return 0;
}