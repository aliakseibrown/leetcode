class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string firstWord;
        string secondWord;

        for(auto a :word1) firstWord+=a;
        for(auto a :word2) secondWord+=a;
        if(firstWord == secondWord) return true;

        return false;
    }
};