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

    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* sorted = NULL;
        ListNode* reverse = NULL;
        map<int, int> mapa;
        while(head != NULL) {
            mapa[head->val]++;
            head=head->next;
        }
        for(auto m: mapa) {
            if(m.second == 1) insert(&reverse, m.first);
        }
        while(reverse != NULL) {
            insert(&sorted, reverse->val);
            reverse=reverse->next;
        }
        return sorted;
    }
};
