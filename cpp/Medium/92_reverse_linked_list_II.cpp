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
    void reverseList(ListNode* head, ListNode** reversed) {
        while(head != NULL) {
            insert(reversed, head->val);
            head = head->next;
        }
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* prob = NULL;
        ListNode* reverse = NULL;
        ListNode* final = NULL;
        int i = 1;
        while(head != NULL) {
            if(i < left ) {
                insert(&prob, head->val);
            }
            if( i >= left) {
                insert(&reverse, head->val);
            }
            head = head->next;
            if(i == right) break;
            i++;
        }
        while(reverse != NULL) {
            insert(&prob, reverse->val);
            reverse = reverse->next;
        }
        while(head != NULL) {
            insert(&prob, head->val);
            head = head->next;
        }
        reverseList(prob, &final);
        return final;
    }
};
