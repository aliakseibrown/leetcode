class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int total = 0;
        unordered_map<char, int> map;
        for(int i = 0; i < stones.size(); i++) map[stones[i]]++;
        for(int i = 0; i < jewels.size(); i++) total=total+map[jewels[i]];
        return total;
    }
};