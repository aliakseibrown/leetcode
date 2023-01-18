class Solution {
public:
    string reverseWords(string s) {
        string temp;
        string full;
        for(int i = 0; i < s.length();i++){
            if(s[i] == 32){
                reverse(temp.begin(), temp.end());
                for(auto t:temp){
                    full.push_back(t);
                }
                full.push_back(' ');
                temp.clear();
                continue;
            }
            temp.push_back(s[i]);
        }
        reverse(temp.begin(), temp.end());
        for(auto t:temp){
            full.push_back(t);
        }
        return full;
    }
};

