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
    void minVal(TreeNode* root, vector<int>& vec) {
        if(root == NULL) return;
        vec.push_back(root->val);
        minVal(root->left, vec);
        minVal(root->right, vec);
        return;
    }
    int getMinimumDifference(TreeNode* root) {
        vector<int> b;
        minVal(root, b);
        sort(b.begin(), b.end());
        int min = b[1];
        for(int i = b.size()-1; i > 0; i--) {
            if(min > b[i] - b[i-1]) min = b[i] - b[i-1];
        }
        return min;
    }
};
