class Solution {
public:
    string makeGood(string s) {
        string correct;
        int k = s.length()/2;
        
        while( k > 0){
            for(int i = 0; i < s.length(); i++){
                if( s[i] == (s[i+1] + 32)){
                    s.erase(s.begin()+i, s.begin()+i+2);
                    continue;
                }
                if( s[i] == (s[i+1] - 32)){
                    s.erase(s.begin()+i, s.begin()+i+2);
                    continue;
                }
            }
            k--;
        }
        return s;
    }
};
