class Solution {
public:
    bool isPalindrome(string s) {
        string b;
        for(auto g: s){
            if(g > 64 && g <= 90){
                b.push_back(g+32);
                continue;
            }
            if(g > 96 && g <= 122 || g > 47 && g < 58){
                b.push_back(g);
                continue;
            }
        }
        int k = b.length()-1;
        for( int i = 0; i <= k; i++){
            if( b[i] != b[k]) return false;
            k--;
        }
        return true;
    }
};
