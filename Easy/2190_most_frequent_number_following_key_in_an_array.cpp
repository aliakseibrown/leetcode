class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        map<int, int>map;
        int max = 1;
        for(int i = 0; i < nums.size()-1; i++){
            if(nums[i] == key){
                map[nums[i+1]]++;
            }
        }
        for(auto m:map){
            if(m.second >= max) {
                max = m.second;
                key = m.first;
            }
        }
        return key;
    }
};

