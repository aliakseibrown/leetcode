class Solution {
public:
    bool halvesAreAlike(string s) {
        string a;
        string b;
        for(int i = 0; i < s.length()/2; i++){
            if(s[i] == 'a') a.push_back(s[i]);
            if(s[i] == 'e') a.push_back(s[i]);
            if(s[i] == 'i') a.push_back(s[i]);
            if(s[i] == 'o') a.push_back(s[i]);
            if(s[i] == 'u') a.push_back(s[i]);

            if(s[i] == 'A') a.push_back(s[i]+32);
            if(s[i] == 'E') a.push_back(s[i]+32);
            if(s[i] == 'I') a.push_back(s[i]+32);
            if(s[i] == 'O') a.push_back(s[i]+32);
            if(s[i] == 'U') a.push_back(s[i]+32);
        }
        for(int i = s.length()/2; i < s.length(); i++){
            if(s[i] == 'a') b.push_back(s[i]);
            if(s[i] == 'e') b.push_back(s[i]);
            if(s[i] == 'i') b.push_back(s[i]);
            if(s[i] == 'o') b.push_back(s[i]);
            if(s[i] == 'u') b.push_back(s[i]);

            if(s[i] == 'A') b.push_back(s[i]+32);
            if(s[i] == 'E') b.push_back(s[i]+32);
            if(s[i] == 'I') b.push_back(s[i]+32);
            if(s[i] == 'O') b.push_back(s[i]+32);
            if(s[i] == 'U') b.push_back(s[i]+32);
        }
        if(a.length() == b.length()) return true;
        cout<<a<<" "<< b;
        return false;
    }
};
