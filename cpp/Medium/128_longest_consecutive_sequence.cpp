class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        sort(nums.begin(), nums.end());

        int length = 1;
        int max = 1;
        for(int i = 0; i < nums.size() - 1; i++){
            if(nums[i] == nums[i+1]) continue;
            if((nums[i]+1) == nums[i+1]) length++;
            if( length > max) max = length;
            if((nums[i]+1) != nums[i+1]) length = 1;
        }
        return max;
    }
};
