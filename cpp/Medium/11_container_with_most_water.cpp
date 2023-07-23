class Solution {
public:
    int maxArea(vector<int>& height) {
        int width;
        int right = height.size()-1;
        int left = 0;
        int sum = 0;
        int preSum = 0;
        while(left < right){
            width = left - right;
            if( width < 0) width = width * -1;
            sum = width * min(height[left], height[right]);
            if( sum > preSum){
                preSum = sum;
            }
            if( height[left] < height[right]){
                left++;
            }
            else if( height[left] > height[right]){
                right--;
            }else{
                left++;
                right--;
            }
        }
        return preSum;
    }
};
