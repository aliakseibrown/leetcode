class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, 
vector<int>& nums3) {
        vector<int>vec;
        map<int,int>mapa;
        set<int>set1;
        set<int>set2;
        set<int>set3;
        for(auto n:nums1) set1.insert(n);
        for(auto n:nums2) set2.insert(n);
        for(auto n:nums3) set3.insert(n);
        for(auto s:set1) mapa[s]++;
        for(auto s:set2) mapa[s]++;
        for(auto s:set3) mapa[s]++;
        for(auto m:mapa) if(m.second > 1) vec.push_back(m.first);
        return vec;
    }
};

it was a big joke about 7 for's loops, but it came up as great solution 
with 75% runtime rate
