class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> frequent;
        unordered_map<int, int>sortedMap; 
        int val = 0;
        for( int i = 0; i < size(nums); i++){
            sortedMap[nums[i]]++;
        }
        for(auto s: sortedMap){
            if(s.second > val){
                val = s.second;
            }
        }
        while(k != 0){
            for(auto s: sortedMap){
                if(s.second == val){
                    frequent.push_back(s.first);
                    k--;
                }
                if( k == 0) break;
            }
            val--;
        }
        
        return frequent;
    }
};
