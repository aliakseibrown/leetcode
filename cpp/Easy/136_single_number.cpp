class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int k = nums[0];
        for( int i = 1; i < nums.size(); i++){
            if(nums[i]!= nums[i-1] && nums[i]!= nums[i+1]){
                k=nums[i];
            }
        }
        return k;
    }
};

