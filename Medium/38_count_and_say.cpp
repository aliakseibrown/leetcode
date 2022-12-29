class Solution {
public:
    string countAndSay(int n) {
        if(n == 1) return "1";
        string given = countAndSay(n-1);
        string temp;
        int len = 0;
        int ind = 0;
        for(int i = 0; i<= given.size(); i++){
            if(given[ind]!= given[i]){
                temp.push_back(len+48);
                temp.push_back(given[ind]);
                ind = i;
                len = 0;
            }
            len++;
        }
        return temp;
    }
};
