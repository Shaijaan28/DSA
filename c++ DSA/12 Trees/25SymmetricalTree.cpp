#include<iostream>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x){
        val = x;
        left = NULL;
        right = NULL;
    }
};
bool isSymmetrical(TreeNode* left, TreeNode* right){
    if(left == NULL && right == NULL) return true;
    if(left == NULL || right == NULL) return false;

    if(left->val != right->val) return false;
    return isSymmetrical(left->left, right->right) &&
    isSymmetrical(left->right, right->left);
}
int main (){

}