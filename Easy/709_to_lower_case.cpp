class Solution {
public:
    string toLowerCase(string s) {
        string a;
        for(auto f: s){
            if(f > 64){
                if(f < 91)a.push_back(f+32);
                else a.push_back(f);
            }else{
                a.push_back(f);
            }
        }
        return a;
    }
};
