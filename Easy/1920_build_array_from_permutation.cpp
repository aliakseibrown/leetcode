class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int>ans;
        for(auto d:nums){
            ans.push_back(nums[d]);
        }
        return ans;
    }
};
