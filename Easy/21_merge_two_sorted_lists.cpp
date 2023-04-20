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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* merged = NULL;
        vector<int> ver;
        while(list1 != NULL) {
            ver.push_back(list1->val);
            list1 = list1->next;
        }
        while(list2 != NULL) {
            ver.push_back(list2->val);
            list2 = list2->next;
        }
        sort(ver.begin(), ver.end(), greater<int>());
        for(auto v: ver) {
            insert(&merged, v);
        }
        return merged;
    }
};
