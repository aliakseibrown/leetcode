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

    int lengthList(ListNode* head) {
        int len = 0;
        while( head!= 0) {
            head=head->next;
            len++;
        }
        return len;
    }

    void reverseList(ListNode* head, ListNode** reversed) {
        ListNode* temp = new ListNode();
        while(head != NULL) {
            insert(reversed, head->val);
            head = head->next;
        }
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* prob = NULL;
        ListNode* reversed = NULL;
        int len = lengthList(head);
        int remain = len%k;
        len-=remain;
        int i = len/k;
        int p = k;
        if(k == 0) return head;
        while(i > 0) {
            ListNode* temp = NULL;
            while(p > 0) {
                insert(&temp, head->val);
                head = head->next;
                p--;
            }
            p = k;
            while(temp != NULL) {
                insert(&prob, temp->val);
                temp = temp->next;
            }
            i--;
        }
        while(head != NULL) {
            insert(&prob, head->val);
            head = head->next;
        }
        reverseList(prob, &reversed);
        return reversed;
    }
};
