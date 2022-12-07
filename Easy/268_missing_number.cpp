class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i = 0;
        for(i; i < nums.size(); i++){
            if(i != nums[i]) return i;
        }
        if(i == nums.size()) return i;
        return 0;
    }
};


//using the formula of partial sum

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = (n*(n+1))/2;
        for(int s: nums){
            sum-=s;
        }
        return sum;
    }
};
