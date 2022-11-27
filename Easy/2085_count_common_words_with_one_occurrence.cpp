class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string, int>map;
        int sum = 0;
        for(int i = 0; i < words1.size(); i++){
            map[words1[i]]++;
            if(map[words1[i]] > 1) map[words1[i]] = 50;
        }
        for(int i = 0; i < words2.size(); i++){
            map[words2[i]]--;
        }
        for(auto a: map){
            if(a.second == 0) sum++;
        }
        return sum;
    }
};
