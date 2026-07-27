#include<iostream>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x){
        val =x;
        left = NULL;
        right = NULL;
    }
};
void changeTree(TreeNode* root){
    if(root == NULL) return ;

    int child =0;

    if(root->left) child += root->left->val;
    if(root->right) child += root->right->val;

    //top down
    if(child >= root->val) root->val = child;
    else {
        if(root->left) root->left->val = root->val;
        if(root->right) root->right->val = root->val;
    }
    // Recursive calls
    changeTree(root->left);
    changeTree(root->right);

    // Bottom-up
    int total = 0;

    if(root->left)
        total += root->left->val;

    if(root->right)
        total += root->right->val;

    if(root->left || root->right)
        root->val = total;

}