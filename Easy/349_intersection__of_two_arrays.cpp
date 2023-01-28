class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int a[1001] = {0};
        vector<int>vec;
        set<int>sset;
        for(int i = 0; i < nums1.size(); i++){
            a[nums1[i]] = 1;
        }
        for(int i = 0; i < nums2.size(); i++){
            if(a[nums2[i]] == 1) sset.insert(nums2[i]);
        }
        for(auto s:sset){
            vec.push_back(s);
        }
        return vec;
    }
};
