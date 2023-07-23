class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max = 0;
        int ans = 0;
        for(int i = 0; i< sentences.size();i++){
            for(char s: sentences[i]){
                if(s == 32) max++;
            }
            if(max > ans) ans = max;
            max = 0;
        }
        return ans+1;
    }
};
