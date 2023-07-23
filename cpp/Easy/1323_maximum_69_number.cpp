class Solution {
public:
    int maximum69Number (int num) {
        
        int k = num;
        int i = num;
        vector<int> nums;
        while(k != 0){
            i = k % 10;
            k = k / 10;
            nums.push_back(i);
        }
        reverse(nums.begin(), nums.end());
        for(int i = 0; i< nums.size(); i++){
            if(nums[i] == 6){
                nums[i] = 9;
                break;
            }
        }
        num = 0;
        
        for(auto s: nums){
            num = num * 10 + s;
        }
        return num;
    }
};
