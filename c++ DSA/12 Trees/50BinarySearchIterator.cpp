#include <iostream>
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

class BSTIterator {
    stack<TreeNode*> st;

public:

    BSTIterator(TreeNode* root) {
        pushLeft(root);
    }

    void pushLeft(TreeNode* root) {

        while(root != NULL) {
            st.push(root);
            root = root->left;
        }
    }

    int next() {

        TreeNode* node = st.top();
        st.pop();

        if(node->right != NULL)
            pushLeft(node->right);

        return node->val;
    }

    bool hasNext() {

        return !st.empty();
    }
};

int main() {

    //        7
    //       / \
    //      3   15
    //          / \
    //         9   20

    TreeNode* root = new TreeNode(7);

    root->left = new TreeNode(3);
    root->right = new TreeNode(15);

    root->right->left = new TreeNode(9);
    root->right->right = new TreeNode(20);

    // Object
    BSTIterator obj(root);

    cout << obj.next() << " ";
    cout << obj.next() << " ";
    cout << obj.next() << " ";
    cout << obj.next() << " ";
    cout << obj.next() << " ";

    return 0;
}