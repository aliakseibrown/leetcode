class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum_first = 0;
        int sum_second = 0;
        for(auto n:nums){
            sum_first += n;
            while(n>0){
                sum_second+= n%10;
                n/=10;
            }
        }
        return sum_first-sum_second;
    }
};
