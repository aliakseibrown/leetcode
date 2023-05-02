/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), 
left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool treeHeight(TreeNode*root, int& len) {
        if(root == NULL){
            return true;
        }
        int lenLeft = 0;
        int lenRight = 0;
        bool left = treeHeight(root->left, lenLeft);
        bool right = treeHeight(root->right, lenRight);
        len = max(lenLeft,lenRight) + 1;
        if(abs(lenLeft-lenRight) > 1) return false;
        if(left && right) return true;
        return false;
    }
    bool isBalanced(TreeNode* root) {
        int len = 0;
        if(root == NULL) return true;
        return treeHeight(root, len);
    }
};
