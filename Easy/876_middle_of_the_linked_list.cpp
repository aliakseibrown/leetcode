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
    int lengthNode(ListNode* head){
        int len = 0;
        while(head != NULL){
            head = head->next;
            len++;
        }
        return len;
    }
    ListNode* middleNode(ListNode* head) {
        int len = lengthNode(head)/2;
        while(len > 0){
            head = head->next;
            len--;
        }
        return head;
    }
};

