class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int half;
        int L = 0;
        int R = nums.size() - 1;
        if( nums[R] < target ) return R+1;
        if( nums[L] >= target ) return L;

        while(L <= R){
            half =((L+R)/2);
            cout<<half;
            if(nums[half] < target){
                L = half+1;
            }
            if(nums[half] > target){
                R = half - 1;
            }
            if( R == 0) return half;
            if(nums[half] == target) return half;
            if(nums[half] > target && nums[half-1] < target) return half;
        }
        return half;
    }
};

