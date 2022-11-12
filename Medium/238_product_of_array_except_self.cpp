class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size = nums.size();
        int left = 1;
        vector<int>right(size,1);
        
        for( int i = size-2; i >= 0; i--){
            right[i] = right[i+1] * nums[i+1]; 
        }
        for( int i = 1; i < size; i++){
            left = left * nums[i-1];
            right[i] = left * right[i];
        }
        return right;
    }
};
