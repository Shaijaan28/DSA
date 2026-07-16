#include <iostream>
#include <vector>
#include <stack>
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

vector<int> postorderTraversal(TreeNode* root) {

    vector<int> ans;

    if(root == NULL)
        return ans;

    stack<TreeNode*> st1, st2;

    st1.push(root);

    while(!st1.empty()) {

        TreeNode* node = st1.top();
        st1.pop();

        st2.push(node);

        if(node->left)
            st1.push(node->left);

        if(node->right)
            st1.push(node->right);
    }

    while(!st2.empty()) {
        ans.push_back(st2.top()->val);
        st2.pop();
    }

    return ans;
}

int main() {

    // Creating the tree
    //
    //        1
    //       / \
    //      2   3
    //     / \
    //    4   5

    TreeNode* root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    vector<int> ans = postorderTraversal(root);

    cout << "Postorder Traversal: ";

    for(int x : ans)
        cout << x << " ";

    cout << endl;

    return 0;
}