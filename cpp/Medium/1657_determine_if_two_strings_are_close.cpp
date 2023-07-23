class Solution {
public:
    bool closeStrings(string word1, string word2) {
        unordered_map<char, int>map1;
        unordered_map<char, int>map2;
        string vec1;
        string vec2;
        set<char> set1;
        set<char> set2;
        
        for(char s: word1) set1.insert(s);
        for(char s: word2) set2.insert(s);
        if(set1 != set2) return false;
        for(char s: word1) map1[s]++;
        for(char s: word2) map2[s]++;
        for(auto m: map1) vec1.push_back(m.second);
        for(auto m: map2) vec2.push_back(m.second);
        sort(vec1.begin(), vec1.end());
        sort(vec2.begin(), vec2.end());
        if(vec1 == vec2) return true;
        return false;
    }
};
