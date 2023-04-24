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

    ListNode* partition(ListNode* head, int x) {
        ListNode* smaller = NULL;
        ListNode* bigger = NULL;
        while(head != NULL) {
            if(head->val < x) { //smaller
                insert(&smaller, head->val);
            }else{  //bigger
                insert(&bigger, head->val);
            }
            head = head->next;
        }
        while(bigger != NULL) {
            insert(&head, bigger->val);
            bigger = bigger->next;
        }
        while(smaller != NULL) {
            insert(&head, smaller->val);
            smaller = smaller->next;
        }
        return head;
    }
};
