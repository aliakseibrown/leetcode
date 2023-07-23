//O(n) 100% runtime;
class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = 0;
        for( int i = s.length()-1; i >= 0; i--){
            if(s[i] != 32) n++;
            if(s[i] == 32 && n != 0) break;
        }
        return n;
    }
};

//using string
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
