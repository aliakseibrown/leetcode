class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int answer = 0;
        for(int i = 0; i < nums.size()-1; i++){
            for( int s = i+1; s < nums.size(); s++){
                if(nums[i] == nums[s]){
                    answer++;
                }
            }
        }
        return answer;
    }
};

