class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int min = nums[0];
        int max = nums[nums.size()-1];
        int div = max;
        while(div > 1){
            if(min%div == 0){
                if(max%div == 0) return div;
            }
            div--;
        }
        return div;
    }
};
