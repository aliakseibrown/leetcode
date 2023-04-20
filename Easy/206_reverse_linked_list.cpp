class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* river = NULL;
        while(head != NULL) {
            ListNode* temp = new ListNode();
            temp->val = head->val;
            temp->next = river;
            river = temp;
            head = head->next;
        }
        return river;
    }
};
