class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int, int>map;
        int pairNum = 0;
        int singleNum = 0;
        for(int i: nums) map[i]++;
        for(auto m: map) if(m.second%2 != 0) singleNum++;
        pairNum = (nums.size() - singleNum)/2;
        return {pairNum, singleNum};
    }
};
