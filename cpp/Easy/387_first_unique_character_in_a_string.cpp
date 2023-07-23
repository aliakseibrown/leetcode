class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int>map;
        string temp;
        int n = 0;
        for(auto m: s){
            map[m]++;
            if(map[m] == 2) n=1; 
        }
        if( n == 0 ) return 0;
        for(auto m: map){
            if(m.second == 1) temp.push_back(m.first);
        }
        cout<<temp;
        if(temp.length() == 0) return -1;
        for( int i = 0; i < s.length(); i++){
            if(temp[temp.length()-1] == s[i]) return i;
        }
        return -1;
    }
};
