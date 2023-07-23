class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int>map;
        set<int>set;
        for(auto s: arr){
            map[s]++;
        }
        arr.clear();
        int i = 0;
        for(auto s: map){
            i++;
            set.insert(s.second);
        }
        if(set.size() == i) return true;
        return false;
    }
};
