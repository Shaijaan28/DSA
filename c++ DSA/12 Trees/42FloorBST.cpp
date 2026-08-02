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
    int findFloor(TreeNode* root, int key) {

        int floor = -1;

        while(root) {

            if(root->val == key)
                return root->val;

            if(root->val > key) {
                root = root->left;
            }
            else {
                floor = root->val;
                root = root->right;
            }
        }

        return floor;
    }
};

int main() {

    //          8
    //        /   \
    //       4     12
    //      / \    / \
    //     2   6  10 14

    TreeNode* root = new TreeNode(8);

    root->left = new TreeNode(4);
    root->right = new TreeNode(12);

    root->left->left = new TreeNode(2);
    root->left->right = new TreeNode(6);

    root->right->left = new TreeNode(10);
    root->right->right = new TreeNode(14);

    Solution obj;

    int key = 5;

    cout << "Floor = " << obj.findFloor(root, key);

    return 0;
}