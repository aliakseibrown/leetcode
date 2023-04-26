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
    void insert(ListNode **head, int num) {
        ListNode* temp = new ListNode();
        temp->val = num;
        temp->next = *head;
        *head = temp;
    }

    ListNode* removeElements(ListNode* head, int val) {
        ListNode* temp = NULL;
        ListNode* reverse = NULL;
        if(head == NULL) return head;
        while(head != NULL) {
            if(head->val != val) {
                insert(&temp, head->val);
            }
            head = head->next;
        }
        while(temp != NULL) {
            insert(&reverse, temp->val);
            temp = temp->next;
        }
        return reverse;
    }
};
