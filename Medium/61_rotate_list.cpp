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
    
    int length(ListNode* head) {
        int len = 0;
        while(head != NULL) {
            len++;
            head = head->next;
        }
        return len;
    }

    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* first = NULL;
        ListNode* second = NULL;
        ListNode* final = NULL;
        int i = 1;
        int len = length(head);
        if( len > 0 && k > len) k = k%len;
        len = len - k;
        if(len == 0) return head;
        while(head != NULL) {
            if(i > len) {
                insert(&second, head->val);
            }else {
                insert(&first, head->val);
            }
            head = head->next;
            i++;
        }
        while(first != NULL) {
            insert(&final, first->val);
            first = first->next;
        }
        while(second != NULL) {
            insert(&final, second->val);
            second = second->next;
        }
        return final;
    }
};
