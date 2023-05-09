/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* invertNodes(TreeNode* root) {
        if(root == NULL) return NULL;
        TreeNode* temp = new TreeNode(root->val);
        temp->left = invertNodes(root->right);
        temp->right = invertNodes(root->left);
        return temp;
    }

    TreeNode* invertTree(TreeNode* root) {
        return invertNodes(root);;
    }
};
