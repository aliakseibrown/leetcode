class Solution {
public:
    string sortSentence(string s) {
        string temp;
        vector<string>vec;
        reverse(s.begin(), s.end());
        for(int i = 0; i < s.length();i++){
            if(s[i] == 32){
                vec.push_back(temp);
                temp.clear();
                continue;
            }
            temp.push_back(s[i]);
        }
        vec.push_back(temp);
        sort(vec.begin(), vec.end());
        temp.clear();
        for(auto v: vec){
            for(int i = v.length()-1; i > 0 ; i--){
                temp.push_back(v[i]);
            }
            temp.push_back(32);
        }
        temp.pop_back();
        return temp;
    }
};
