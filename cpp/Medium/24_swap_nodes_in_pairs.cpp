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

    ListNode* swapPairs(ListNode* head) {
        ListNode* swap = NULL;
        ListNode* temp = NULL;
        ListNode* reverse = NULL;
        int i = 0;
        for(i; head != NULL; i++) {
            if(i % 2 == 0) {
                insert(&temp, head->val);
            }else{
                insert(&swap, head->val);
                insert(&swap,temp->val);
                temp = temp->next;
            }
            head = head->next;
        }
        if(i % 2 != 0) insert(&swap,temp->val);
        while(swap != NULL) {
            insert(&reverse, swap->val);
            swap = swap->next;
        }
        return reverse;
    }
};
