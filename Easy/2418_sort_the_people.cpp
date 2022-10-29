class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) 
{
        map<int,string, greater<int>>map;
        for(int i=0; i < heights.size(); i++){
            map[heights[i]] = names[i];
        }
        names.clear();
        for( auto s: map){
            names.push_back(s.second);
        }
        return names;
    }
};
