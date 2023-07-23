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
    int length(ListNode* head) {
        int len = 0;
        while(head!= NULL) {
            len++;
            head=head->next;
        }
        return len;
    }
    void insert(ListNode** head, int num){
        ListNode* temp = new ListNode();
        temp->val = num;
        temp->next = *head;
        *head = temp;
    }
    ListNode* reverse(ListNode* head){
        ListNode* temp = NULL;
        while(head!= NULL){
            insert(&temp, head->val);
            head=head->next;
        }
        return temp;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* removed = NULL;
        ListNode* reversed;
        int len = length(head) - n;
        while(head != NULL){
            ListNode* temp = new ListNode();
            cout<<len<<" "<<head->val<<'\n';
            if(len == 0){
                head = head->next;
            }
            if(head == NULL) break;
            temp->val = head->val;
            temp->next = removed;
            removed = temp;
            head = head->next;
            len--;
        }
        reversed = reverse(removed);
        return reversed;
    }
};
