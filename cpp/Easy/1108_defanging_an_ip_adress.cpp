class Solution {
public:
    string defangIPaddr(string address) {
        string def;
        for(int i = 0; i < address.length();i++){
            if(address[i] == 46){
                def.push_back(91);
                def.push_back(46);
                def.push_back(93);
                continue;
            }
            def.push_back(address[i]);
        }
        return def;
    }
};
