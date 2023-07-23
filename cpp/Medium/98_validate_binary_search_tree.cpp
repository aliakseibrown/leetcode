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
    void inorder(TreeNode* root,vector<int>& plate) {
        if(root == NULL) return;
        inorder(root->left, plate);
        plate.push_back(root->val);
        inorder(root->right, plate);
    }

    bool isValidBST(TreeNode* root) {
        vector<int> plate;
        inorder(root, plate);
        for(int i = 0; i< plate.size()-1; i++) {
            if(plate[i] >= plate[i+1]) return false;
        }
        return true;
    }
};
