class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> perfectVector;
        for(int i = 0; i < nums.size(); i++ ){
            perfectVector.insert(nums[i]);
        }
        if(nums.size()==perfectVector.size()){
            return false;
        }
        return true;
    }
};




