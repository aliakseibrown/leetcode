class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> two;
        for (int i = 0; i < (nums.size() - 1); i++){
            for(int n = i+1; n < nums.size(); n++){
                if( i != n){
                    if((nums[i] + nums[n]) == target){
                        two.push_back(i);
                        two.push_back(n);
                        return two;
                    }
                }
            }
        }
        return two;
    }
};