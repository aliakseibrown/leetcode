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
    void sumNode(TreeNode* root, int& num) {
        if(root == NULL) return;
        if(root->left != NULL && (root->left->left == NULL && root->left->right == NULL)) {
            num+=root->left->val;
        }
        sumNode(root->left, num);
        sumNode(root->right, num);
        return;
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int sum = 0;
        sumNode(root, sum);
        return sum;
    }
};
