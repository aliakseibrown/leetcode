class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int num = 0;
        for(int i = 0; i < strs[0].length(); i++){
            for(int k = 0; k < strs.size()-1;k++){
                if(strs[k][i] > strs[k+1][i]){
                    num++;
                    break;
                }
            }
        }
        return num;
    }
};
