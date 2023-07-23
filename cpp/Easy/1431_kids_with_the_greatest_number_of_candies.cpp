class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>kids;
        int max = 0;
        for(auto c:candies){
            if(c > max) max = c;
        }
        for(auto c:candies){
            kids.push_back(c+extraCandies >= max? true:false);
        }
        return kids;
    }
};
