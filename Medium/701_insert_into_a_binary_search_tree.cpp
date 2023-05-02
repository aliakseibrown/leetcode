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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        if(root == NULL) {
            root = new TreeNode(val);
        }else if(root->val >= val) {
            if(root->left == NULL) {
                root->left = new TreeNode(val);
            }else{
                root->left = insertIntoBST(root->left, val);
            }
        }else{
            if(root->right == NULL) {
                root->right = new TreeNode(val);
            }else{
                root->right = insertIntoBST(root->right, val);
            }
        }
        return root;
    }
};
