class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
{
        vector<int> common;
        int len = 0;
        int len1 = nums1.size();
        int len2 = nums2.size();
        int n = 0 ,b = 0, i = 0;
        double mid = 0;
        while(n+b < len1+len2) {
            if(n < len1) {
                while(nums1[n] < nums2[b]) {
                    common.push_back(nums1[n]);
                    n++;
                }
            }else if(b < len2) {
                while(nums1[n] >= nums2[b]) {
                    common.push_back(nums2[b]);
                b++;
                }
            } else{
                b++;
                n++;
            }
        }
        // len = common.size();
        // if(len%2 == 0) {
        //     double first = common[(len/2)-1];
        //     double second = common[len/2];
        //     mid = (first+second)/2;
        // } else {
        //     mid = common[len/2];
        // }
        return mid;
    }
};
