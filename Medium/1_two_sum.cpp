class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>>pairNums;
        int left = 0;

        for(int i = 0; i < nums.size(); i++){
            pairNums.push_back(make_pair(nums[i], i));
        }

        int right = pairNums.size()-1;
        int sum;
        sort(pairNums.begin(), pairNums.end());
        while( left < right){
            sum = pairNums[left].first + pairNums[right].first;
            if(sum == target) {
                return {pairNums[left].second, pairNums[right].second};
            }
            else if(sum > target) right--;
            else left++;
        }
        return {};
    }
};
