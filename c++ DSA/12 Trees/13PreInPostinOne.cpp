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

void allTraversal(TreeNode* root) {

    vector<int> preorder;
    vector<int> inorder;
    vector<int> postorder;

    if(root == NULL)
        return;

    stack<pair<TreeNode*, int>> st;

    st.push({root, 1});

    while(!st.empty()) {

        auto it = st.top();
        st.pop();

        // State 1 -> Preorder
        if(it.second == 1) {

            preorder.push_back(it.first->val);

            it.second++;
            st.push(it);

            if(it.first->left)
                st.push({it.first->left, 1});
        }

        // State 2 -> Inorder
        else if(it.second == 2) {

            inorder.push_back(it.first->val);

            it.second++;
            st.push(it);

            if(it.first->right)
                st.push({it.first->right, 1});
        }

        // State 3 -> Postorder
        else {

            postorder.push_back(it.first->val);
        }
    }

    cout << "Preorder : ";
    for(int x : preorder)
        cout << x << " ";

    cout << endl;

    cout << "Inorder  : ";
    for(int x : inorder)
        cout << x << " ";

    cout << endl;

    cout << "Postorder: ";
    for(int x : postorder)
        cout << x << " ";

    cout << endl;
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

    allTraversal(root);

    return 0;
}