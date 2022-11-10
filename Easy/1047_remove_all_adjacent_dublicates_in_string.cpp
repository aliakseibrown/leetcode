class Solution {
public:
    string removeDuplicates(string s) {
        string b;
        for(char m: s){
            if(b.back() == m) b.pop_back();
            else b.push_back(m);
        }
        return b;
    }
};
