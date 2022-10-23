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

int length(ListNode* node){
    int num = 0;
    while(node != NULL){
        num++;
        node = node->next;
    }
    return num;
}

void insert(ListNode** head, int data){
    ListNode *temp = new ListNode();
    temp->val = data;
    temp->next = *head;
    *head = temp;
}

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *temp1 = l1, *temp2 = l2;
        ListNode *head = NULL;
        //temp = new ListNode();
        int *arrayFinal;
        int *arrayFirst;
        int *arraySecond;

        int sum;
        int max;
        int len1 = length(l1);
        int len2 = length(l2);

        if(len1>len2){
            max = len1;
        }else{
            max = len2;
        }

        arrayFirst = new int[max];
        arraySecond = new int[max];
        arrayFinal = new int[max+1];

        for( int i= 0; i< max; i++){
            arrayFirst[i] = 0;
            arraySecond[i] = 0;
        }
        int i=max-1, j=max-1, n=0;

        while(temp1 != NULL){
            arrayFirst[i] = temp1->val;
            temp1 = temp1->next;
            i--;
        }
        while(temp2 != NULL){
            arraySecond[j] = temp2->val;
            temp2 = temp2->next;
            j--;
        }
        int p = 0, m = 0, b, v = 0;
        int k = max-1;
        while(k >= 0){
            int sum = arrayFirst[k] + arraySecond[k];
            if (sum > 9){
                arrayFinal[m] = sum % 10 + p;
                p = 0;
                p++;
            }else{
                b = sum + p;
                if( b == 10){
                    arrayFinal[m] = 0;
                    v = true;
                }else{
                    arrayFinal[m] = sum + p;
                    p = 0;
                }
            }
            k--;
            m++;
        }

        if( p!=0){
            arrayFinal[m] = 1;
            k = max;
        }else{
            k = max-1;
        }

        while(k >= 0){
            insert(&head, arrayFinal[k]);
            k--;
        }
        //core->val = arrayFinal[max];
        return head;


    }

};