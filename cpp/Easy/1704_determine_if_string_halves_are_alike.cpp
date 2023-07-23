class Solution {
public:
    bool halvesAreAlike(string s) {
        int sum=0;
        for(int i = 0; i < s.length()/2; i++){
            if(s[i] == 'a' || s[i] == 'A') sum++;
            if(s[i] == 'e' || s[i] == 'E') sum++;
            if(s[i] == 'i' || s[i] == 'I') sum++;
            if(s[i] == 'o' || s[i] == 'O') sum++;
            if(s[i] == 'u' || s[i] == 'U') sum++;
        }
        cout<<sum<<" ";
        for(int i = s.length()/2; i < s.length(); i++){
            if(s[i] == 'a' || s[i] == 'A') sum--;
            if(s[i] == 'e' || s[i] == 'E') sum--;
            if(s[i] == 'i' || s[i] == 'I') sum--;
            if(s[i] == 'o' || s[i] == 'O') sum--;
            if(s[i] == 'u' || s[i] == 'U') sum--;
        }
        if(sum == 0) return true;
        return false;
    }
};
