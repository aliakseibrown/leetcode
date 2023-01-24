class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int k = 0;
        int size = nums2.size();
        for(int i = 0; i < nums1.size(); i++){
            if(nums2[k] == nums1[i]) return nums1[i];
            if(nums2[k] > nums1[i]) continue;
            if(nums2[k] < nums1[i]){
                k++;
                i--;
            }
            if(k == size) return -1;
        }
        return -1;
    }
};
