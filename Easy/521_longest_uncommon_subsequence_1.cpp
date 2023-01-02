class Solution {
public:
    int findLUSlength(string a, string b) {
        if(a.length() > b.length()) return a.length();
        if(a == b) return -1;
        return b.length();
    }
};

one-line-solution

class Solution {
public:
    int findLUSlength(string a, string b) {
        return a == b? -1: max(a.length(), b.length());
    }
};
