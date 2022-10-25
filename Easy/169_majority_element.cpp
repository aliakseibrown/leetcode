class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>map;
        int maxNumber = 0;
        int length = 0;
        for(auto s: nums){
            map[s]++;
            if( length < map[s]){
                length = map[s];
                maxNumber = s;
            }
        }
        return maxNumber;
    }
};



