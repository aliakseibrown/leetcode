class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        int reverse = 0;
        int n = 0;
        int size = nums.size();
        set<int> sete;
        for(int i = 0; i < size; i++){
            n = nums[i];
            if(n > 9){
                reverse=0;
                while(n > 0){
                    reverse = reverse*10 + (n%10);
                    n/=10;
                }
                n = reverse;
            }
            nums.push_back(n);
        }
        for(auto n:nums){
            sete.insert(n);
        }
        return sete.size();
    }
};
