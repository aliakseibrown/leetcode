class Solution {
public:
    char repeatedCharacter(string s) {
        char let;
        int pos = s.length();
        for(int i = 0; i < s.length()-1; i++){
            for(int k = i+1; k < s.length(); k++){
                if(s[i] == s[k]){
                    if(k < pos){
                        let = s[i];
                        pos = k;
                    }
                    break;
                }
            }
            if( i > pos) break;
        }
        return let;
    }
};
