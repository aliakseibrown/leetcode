class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l = 0;
        int p = nums.size()-1;
        int m = -1;
        while(l<=p){
            m = (l+p)/2;
            if(nums[m] < target) l=m+1;
            if(nums[m] > target) p=m-1;
            if(nums[m] == target) break;
            m=-1;
        }
        if(m == -1) return {-1,-1};
        l = m;
        p = m;
        while(l>0){
            if(nums[l-1] != target) break;
            l--;
        }
        while(p<nums.size()-1){
            if(nums[p+1] != target) break;
            p++;
        }
        return {l, p};
    }
};
