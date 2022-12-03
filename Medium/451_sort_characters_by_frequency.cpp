class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>map;
        vector<pair<int, char>> paired;
        for( char a: s) map[a]++;
        for(auto a: map){
            paired.push_back(make_pair(a.second, a.first));
        }
        sort(paired.begin(), paired.end(), greater());
        s.clear();
        for(int i = 0; i < paired.size(); i++){
            for(int k = 0; k < paired[i].first; k++){
            s.push_back(paired[i].second);
            }
        }
        return s;
    }
};

