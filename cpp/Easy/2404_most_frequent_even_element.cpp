class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int max = 0;
        int theNum = 0;
        sort(nums.begin(), nums.end());
        unordered_map<int, int>map;
        for(auto a: nums){
            if(++map[a] > max && a % 2 == 0){
                max=map[a];
                theNum=a;
                
            }
        }
        if(max == 0) return -1;
        return theNum;
    }
};
