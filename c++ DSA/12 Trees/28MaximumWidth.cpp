#include <iostream>
#include <queue>
#include <algorithm>
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

int widthOfBinaryTree(TreeNode* root) {

    if(root == NULL)
        return 0;

    long long ans = 0;

    queue<pair<TreeNode*, long long>> q;
    q.push({root, 0});

    while(!q.empty()) {

        int size = q.size();

        long long mini = q.front().second;

        long long first, last;

        for(int i = 0; i < size; i++) {

            TreeNode* node = q.front().first;
            long long cur_id = q.front().second - mini;
            q.pop();

            if(i == 0)
                first = cur_id;

            if(i == size - 1)
                last = cur_id;

            if(node->left)
                q.push({node->left, 2 * cur_id + 1});

            if(node->right)
                q.push({node->right, 2 * cur_id + 2});
        }

        ans = max(ans, last - first + 1);
    }

    return ans;
}

int main() {

    //        1
    //      /   \
    //     3     7
    //    / \     \
    //   5   3     9

    TreeNode* root = new TreeNode(1);

    root->left = new TreeNode(3);
    root->right = new TreeNode(2);

    root->left->left = new TreeNode(5);
    root->left->right = new TreeNode(3);

    root->right->right = new TreeNode(9);

    cout << "Maximum Width = " << widthOfBinaryTree(root);

    return 0;
}