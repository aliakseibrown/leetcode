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
    void getVal(TreeNode* tree, vector<int>* vec) {
        if(tree == NULL) return;
        getVal(tree->left, vec);
        vec->push_back(tree->val);
        getVal(tree->right, vec);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> inorder;
        getVal(root, &inorder);
        return inorder;
    }
};

//inorder => Left->Data->Right
