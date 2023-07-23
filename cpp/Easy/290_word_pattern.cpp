class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char,string>map;
        set <string> set_pat;
        string temp;
        int index = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i]==32 || i == s.length()-1){
                if(i == s.length()-1){
                    temp.push_back(s[i]);
                }
                if(map.count(pattern[index])){
                    if(map[pattern[index]] != temp) return false;
                }
                set_pat.insert(temp);
                map[pattern[index]] = temp;
                index++;
                temp.clear();
                continue;
            }
            temp.push_back(s[i]);
        }
        if(set_pat.size() != map.size()) return false;
        if(index != pattern.length()) return false;
        return true;
    }
};
