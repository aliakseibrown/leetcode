class Solution {
public:
    string decodeMessage(string key, string m,int k=0) {
    vector<char> map(26);
    
    for(auto i:key){
        if(i!=32 and !map[i-'a']) map[i-'a']= (k+'a') , k++;
	}
        for(int i=0;i<m.size();i++) if(m[i]!=32) m[i]= map[m[i]-'a'];
    return m;
}
};
