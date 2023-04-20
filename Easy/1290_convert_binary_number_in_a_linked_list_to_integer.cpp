class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int dem = 0;
        int length = 0;
        int sum = 0;
        vector<int> ver;
        while(head != NULL) {
            dem = head->val;
            ver.push_back(dem);
            head = head->next;
        }
        length = ver.size()-1;
        for(int i=0; i < ver.size(); i++){
            dem = ver[i]*pow(2, length);
            sum+=dem;
            length--;
        }
        return sum;
    }
};
