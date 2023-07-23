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
    void inorder(TreeNode* root, vector<int>& vec) {
        if(root == NULL) return;
        inorder(root->left, vec);
        vec.push_back(root->val);
        inorder(root->right, vec);
    }
    void swapNode(TreeNode* root, vector<int>& vec, int& i) {
        if(root == NULL) return;
        swapNode(root->left, vec,i);
        if(root->val != vec[i]) root->val = vec[i];
        i++;
        swapNode(root->right, vec, i);
    }

    void recoverTree(TreeNode* root) {
        vector<int> vec;
        int i = 0;
        inorder(root, vec);
        sort(vec.begin(), vec.end());
        swapNode(root, vec, i);
        return;
    }
};
