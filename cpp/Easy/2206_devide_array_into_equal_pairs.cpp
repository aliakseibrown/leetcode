class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int,int>mapa;
        for(auto n:nums) mapa[n]++;
        for(auto m:mapa) if(m.second%2 != 0) return false;
        return true;
    }
};
