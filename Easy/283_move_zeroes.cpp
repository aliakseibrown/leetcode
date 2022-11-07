class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int size = nums.size();
        int p = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0) p++;
        }
        if( p == 0 || p == size) return;
        nums.erase(remove(nums.begin(), nums.end(), 0), nums.end());
        for(int i = 0; i < p; i++){
            nums.push_back(0);
        }
    }
};
