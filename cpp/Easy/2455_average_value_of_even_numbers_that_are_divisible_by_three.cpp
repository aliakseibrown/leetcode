class Solution {
public:
    int averageValue(vector<int>& nums) {
        int sum = 0;
        int ind = 0;
        for(auto n:nums){
            if(n%2==0){
                if(n%3==0){
                    sum+=n;
                    ind++;
                }
            }
        }
        if(ind != 0) return sum/ind;
        return 0;
    }
};
