class Solution {
public:
    int strStr(string haystack, string needle) {
        string temp;
        if(needle.length() > haystack.length()) return -1;
        for(int i = 0; i <= haystack.length()-needle.length(); i++){
            for(int k = i; k < needle.length()+i; k++){
                temp.push_back(haystack[k]);
            }
            if(temp == needle) return i;
            temp.clear();
        }
        return -1;
    }
};
