class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        unordered_map<int,int>map;
        int sum = 0;
        long long a = 0;
        for(int s: skill){
            sum+=s;
            map[s]++;
        }
        sum /= skill.size()/2;
        for(int i = 0; i< skill.size(); i++){
            cout<< skill[i];
            if(map[sum-skill[i]] > 0){
                a = a + ((sum-skill[i]) * skill[i]);
                map[sum-skill[i]]--;
            }
        }
        for(auto m: map){
            if(m.second > 0) return -1;
        }
        return a/2;
    }
};

