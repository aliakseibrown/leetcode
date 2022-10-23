class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> answer;

        for(int i = 0; i < nums.size(); i++){
            int total = 0;
            for( int s = 0; s< nums.size(); s++) if( nums[i] > nums[s]) total++;
            answer.push_back(total);
        }
        return answer;
    }
};