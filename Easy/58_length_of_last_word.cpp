class Solution {
public:
    int lengthOfLastWord(string s) {
        string temp;
        int sum = 0;
        for( int i = 0; i < s.length(); i++){
            temp.push_back(s[i]);
            if(s[i] != 32) sum = temp.length();
            if(s[i] == 32){
                temp.clear();
            }
        }
        return sum;
    }
};
