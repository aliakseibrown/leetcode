class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>map;
        for(auto a: magazine){
            map[a]++;
        }
        for(auto a: ransomNote){
            map[a]--;
            if(map[a]== -1){
                return false;
            }
        }
        return true;
        
    }
};
