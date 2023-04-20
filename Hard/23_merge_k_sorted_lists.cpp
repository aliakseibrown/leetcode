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
class Solution {
public:
    void insert(ListNode** head, int num) {
        ListNode* temp = new ListNode();
        temp->val = num;
        temp->next = *head;
        *head = temp;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* merged = NULL;
        vector<int> full;
        for(auto l: lists) {
            while(l!=NULL) {
                full.push_back(l->val);
                l = l->next;
            }
        }
        sort(full.begin(),full.end(),greater<int>());
        for(auto f: full){
            insert(&merged, f);
        }
        return merged;
    }
};
