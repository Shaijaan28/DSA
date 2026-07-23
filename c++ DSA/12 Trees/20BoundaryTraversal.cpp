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

bool isLeaf(TreeNode* node) {
    return (node->left == NULL && node->right == NULL);
}

// Add Left Boundary
void addLeftBoundary(TreeNode* root, vector<int>& ans) {

    TreeNode* curr = root->left;

    while(curr) {

        if(!isLeaf(curr))
            ans.push_back(curr->val);

        if(curr->left)
            curr = curr->left;
        else
            curr = curr->right;
    }
}

// Add Leaf Nodes
void addLeaves(TreeNode* root, vector<int>& ans) {

    if(root == NULL)
        return;

    if(isLeaf(root)) {
        ans.push_back(root->val);
        return;
    }

    addLeaves(root->left, ans);
    addLeaves(root->right, ans);
}

// Add Right Boundary (Bottom to Top)
void addRightBoundary(TreeNode* root, vector<int>& ans) {

    TreeNode* curr = root->right;
    stack<int> st;

    while(curr) {

        if(!isLeaf(curr))
            st.push(curr->val);

        if(curr->right)
            curr = curr->right;
        else
            curr = curr->left;
    }

    while(!st.empty()) {
        ans.push_back(st.top());
        st.pop();
    }
}

vector<int> boundaryTraversal(TreeNode* root) {

    vector<int> ans;

    if(root == NULL)
        return ans;

    if(!isLeaf(root))
        ans.push_back(root->val);

    addLeftBoundary(root, ans);

    addLeaves(root, ans);

    addRightBoundary(root, ans);

    return ans;
}

int main() {

    //          1
    //        /   \
    //       2     3
    //      / \   / \
    //     4   5 6   7
    //        / \
    //       8   9

    TreeNode* root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    root->left->right->left = new TreeNode(8);
    root->left->right->right = new TreeNode(9);

    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    vector<int> ans = boundaryTraversal(root);

    cout << "Boundary Traversal: ";

    for(int x : ans)
        cout << x << " ";

    cout << endl;

    return 0;
}