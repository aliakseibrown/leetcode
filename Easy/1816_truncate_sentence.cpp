class Solution {
public:
    string truncateSentence(string s, int k) {
        int a = 0;
        string b;
        for(auto g:s){
            if(g == 32){
                a++;
                if(k == a) return b;
            }
            b.push_back(g);
        }
        return b;
    }
};
