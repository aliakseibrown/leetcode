class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int>map;
        int sum = 0;
        for(int i = 0; i < nums.size(); i++) map[nums[i]]++;
        for(auto s: map) if(s.second < 2) sum += s.first;
        return sum;
    }
};
