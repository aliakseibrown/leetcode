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
    void addToMap(TreeNode* root, unordered_map<int, int>& mapa) {
        if(root == NULL) return;
        mapa[root->val]++;
        addToMap(root->left, mapa);
        addToMap(root->right, mapa);
        return;
    }
    vector<int> findMode(TreeNode* root) {
        unordered_map<int, int> mapa;
        vector<int> vec;
        int max = 0;
        addToMap(root, mapa);
        for(auto m:mapa) {
            if (m.second > max) {
                max = m.second;
            }
        }
        for(auto m:mapa) {
            if (m.second == max) {
                vec.push_back( m.first);
            }
        }
        return vec;
    }
};
