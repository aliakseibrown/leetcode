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
    void readLevel(TreeNode* root, vector<vector<int>>& levels, int i) {
        if(root == NULL) return;
        if(levels.size() <= i) levels.push_back({});
        levels[i].push_back(root->val);
        i++;
        readLevel(root->left, levels, i);
        readLevel(root->right, levels, i);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        int i = 0;
        vector<vector<int>> levels;
        if(root == NULL) return levels;
        readLevel(root, levels, i);
        return levels;
    }
};
