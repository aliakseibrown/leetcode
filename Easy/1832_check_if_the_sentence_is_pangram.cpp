class Solution {
public:
    bool checkIfPangram(string sentence) {
        bool a[26] = {false};
        for(auto s: sentence) a[s-97] = true;
        for(auto a: a){
            if(a == false) return false;
            }
        return true;
    }
};
