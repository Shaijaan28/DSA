#include <iostream>
#include <queue>
#include <sstream>
#include <string>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) {
        val = x;
        left = NULL;
        right = NULL;
    }
};

class Codec {
public:

    // Serialize
    string serialize(TreeNode* root) {

        if(root == NULL)
            return "";

        string ans = "";
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()) {

            TreeNode* node = q.front();
            q.pop();

            if(node == NULL) {
                ans += "# ";
            }
            else {
                ans += to_string(node->val) + " ";
                q.push(node->left);
                q.push(node->right);
            }
        }

        return ans;
    }

    // Deserialize
    TreeNode* deserialize(string data) {

        if(data.size() == 0)
            return NULL;

        stringstream ss(data);

        string str;
        ss >> str;

        TreeNode* root = new TreeNode(stoi(str));

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()) {

            TreeNode* node = q.front();
            q.pop();

            // Left Child
            if(!(ss >> str))
                break;

            if(str != "#") {
                TreeNode* leftNode = new TreeNode(stoi(str));
                node->left = leftNode;
                q.push(leftNode);
            }

            // Right Child
            if(!(ss >> str))
                break;

            if(str != "#") {
                TreeNode* rightNode = new TreeNode(stoi(str));
                node->right = rightNode;
                q.push(rightNode);
            }
        }

        return root;
    }
};

void inorder(TreeNode* root) {

    if(root == NULL)
        return;

    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

int main() {

    //        1
    //      /   \
    //     2     3
    //          / \
    //         4   5

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->right->left = new TreeNode(4);
    root->right->right = new TreeNode(5);

    Codec obj;

    string s = obj.serialize(root);

    cout << "Serialized Tree:\n";
    cout << s << endl;

    TreeNode* newRoot = obj.deserialize(s);

    cout << "\nInorder Traversal after Deserialization:\n";
    inorder(newRoot);

    return 0;
}