class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char, char> map;
        for(int i = 0; i < s.length(); i++){
            if(map.count(s[i])){
                if(map[s[i]] != t[i]) return false;
            }
            map[s[i]] = t[i];
        }
        return true;
    }
};
