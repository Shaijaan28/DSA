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

    vector<int> postorder;

    if(root == NULL)
        return postorder;

    stack<TreeNode*> st;
    TreeNode* curr = root;

    while(curr != NULL || !st.empty()) {

        if(curr != NULL) {
            st.push(curr);
            curr = curr->left;
        }
        else {

            TreeNode* temp = st.top()->right;

            if(temp == NULL) {

                temp = st.top();
                st.pop();
                postorder.push_back(temp->val);

                while(!st.empty() && temp == st.top()->right) {
                    temp = st.top();
                    st.pop();
                    postorder.push_back(temp->val);
                }
            }
            else {
                curr = temp;
            }
        }
    }

    return postorder;
}

int main() {

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