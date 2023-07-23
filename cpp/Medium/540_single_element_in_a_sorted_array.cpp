class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        if(nums.size() > 1){
            if(nums[nums.size()-1] != nums[nums.size()-2]) return 
nums[nums.size()-1];
            if(nums[0] != nums[1]) return nums[0];
        }
        for(int i = 1; i< nums.size()-1; i++){
            if(nums[i] != nums[i-1]){
                if(nums[i] != nums[i+1]) return nums[i];
            }
        }
        return 0;
    }
};
