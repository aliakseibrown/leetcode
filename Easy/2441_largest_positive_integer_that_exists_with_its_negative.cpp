class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(),nums.end(), greater<int>());

        for( int i = 0; i< nums.size(); i++){
            for( int a = 0; a< nums.size(); a++){
                if(nums[i] == nums[a]*-1){
                    int output = nums[i];
                    return output;
                }
            }
        }
        return -1;
    }
};