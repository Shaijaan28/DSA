#include <bits/stdc++.h>
using namespace std;

class TreeNode {
public:
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
    int kthSmallest(TreeNode* root, int k) {

        stack<TreeNode*> st;

        while (true) {

            while (root != NULL) {
                st.push(root);
                root = root->left;
            }

            root = st.top();
            st.pop();

            k--;

            if (k == 0)
                return root->val;

            root = root->right;
        }
    }
};

int main() {
    /*
            5
          /   \
         3     6
        / \
       2   4
      /
     1
    */

    TreeNode* root = new TreeNode(5);
    root->left = new TreeNode(3);
    root->right = new TreeNode(6);
    root->left->left = new TreeNode(2);
    root->left->right = new TreeNode(4);
    root->left->left->left = new TreeNode(1);

    Solution obj;

    int k = 3;
    cout << obj.kthSmallest(root, k);

    return 0;
}