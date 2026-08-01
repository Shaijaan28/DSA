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
    TreeNode* searchBST(TreeNode* root, int val) {

        if(root == NULL || root->val == val)
            return root;

        if(val < root->val)
            return searchBST(root->left, val);

        return searchBST(root->right, val);
    }
};

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

    int target = 2;

    TreeNode* ans = obj.searchBST(root, target);

    if(ans)
        cout << "Node Found: " << ans->val << endl;
    else
        cout << "Node Not Found" << endl;

    return 0;
}