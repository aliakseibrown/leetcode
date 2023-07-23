class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string final = "";
        char letter;
        int n = strs.size();
        cout<<n<<endl;
        for(int i = 0; i < strs[0].size(); i++){
            letter = strs[0][i];
            for(int k = 0; k < n; k++){
                if(letter != strs[k][i]) return final;
            }
            final.push_back(letter);
            cout<<i<<endl;
        }
        return final;
    }
};
