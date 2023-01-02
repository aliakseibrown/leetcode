class Solution {
public:
    bool detectCapitalUse(string word) {
        int cap = 0;
        for(auto w:word){
            if(w < 91) cap++;
        }
        if(cap == word.length()) return true;
        if(cap == 0) return true;
        if(cap == 1 && word[0] < 91) return true;
        return false;
    }
};
