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
    void insert( ListNode** head, int num) {
        ListNode* temp = new ListNode();
        temp->val = num;
        temp->next = *head;
        *head = temp;
    }

    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* sorted = new ListNode();
        ListNode* reverse = NULL;
        if(head == NULL) {
            return head;
        }
        sorted->val = head->val;
        while(head != NULL) {
            if(head->val != sorted->val){
                insert(&sorted, head->val);
            }
            head = head->next;
        }
        while(sorted != NULL) {
            insert(&reverse, sorted->val);
            sorted = sorted->next;
        }
        return reverse;
    }
};
