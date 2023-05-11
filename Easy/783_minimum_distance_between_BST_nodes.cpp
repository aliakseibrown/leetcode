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
    int minDiffInBST(TreeNode* root) {
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

// class Solution {
// public:
//     void minVal(TreeNode* root, int& min) {
//         if(root == NULL) return;
//         if(root->left != NULL) {
//             int left = abs(root->val - root->left->val);
//             min = left > min? min: left;
//         }
//         if(root->right != NULL) {
//             int right = abs(root->right->val - root->val);
//             min = right > min? min: right;
//         }
//         cout<<min<<" "<<root->val<<"\n";
//         minVal(root->left, min);
//         minVal(root->right, min);
//         return;
//     }
//     int minDiffInBST(TreeNode* root) {
//         int min = root->val;
//         minVal(root, min);
//         return min;
//     }
// };


