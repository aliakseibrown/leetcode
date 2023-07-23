class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int min = 0;
        int max = 0;
        if(nums[0] > 0)  return nums.size();
        if(nums[nums.size()-1] < 0)  return nums.size();
        for( auto n:nums){
            if(n < 0) min++;
            if(n > 0) max++;
        }
        return max > min? max:min;
    }
};
