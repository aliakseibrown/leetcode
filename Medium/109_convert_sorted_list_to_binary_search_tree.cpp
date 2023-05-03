/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    TreeNode* createTree(vector<int> &vec, int start, int end) {
        if(start > end) return NULL;
        int mid = (start+end)/2;
        TreeNode* temp = new TreeNode(vec[mid]);
        temp->left = createTree(vec, start, mid-1);
        temp->right = createTree(vec, mid+1, end);
        return temp;
    }

    TreeNode* sortedListToBST(ListNode* head) {
        vector<int> sorted;
        if(head==NULL) return NULL;
        while(head!=NULL) {
            sorted.push_back(head->val);
            head=head->next;
        }
        return createTree(sorted, 0, sorted.size()-1);
    }
};
