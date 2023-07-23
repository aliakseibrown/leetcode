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
     ListNode* insertBack(ListNode* lastNode, int val) {
        ListNode* temp = new ListNode();
        temp->val = val;
        lastNode->next = temp;
        lastNode = temp;
        return lastNode;
    }
    void insertFront(ListNode** head, int val) {
        ListNode* temp = new ListNode();
        temp->val = val;
        temp->next = *head;
        *head = temp;
    }

    ListNode* sortList(ListNode* head) {
        ListNode* sorted = NULL;
        ListNode* lastNode = new ListNode();
        if(head == NULL) return NULL;
        
        insertFront(&sorted, head->val);
        head = head->next;
        while(head != NULL) {
            if(sorted->val <= head->val) {
                lastNode = sorted;
                insertFront(&sorted, head->val);
            }else {
                lastNode = insertBack(lastNode, head->val);
            }
            cout<< sorted->val<<"\n";
            head = head->next;
        }
        return sorted;
    }
};

//n+n+n = O(3n)~O(n)
