class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> formArray;
        sort(nums.begin(), nums.end());
        map<int,int> mapa;
        map<int,int> amout;

        for( int i = 0; i < nums.size(); i++){
            amout[nums[i]]++;
            if(amout[nums[i]] == 2){
                formArray.push_back(nums[i]);
            }
        }
        for( int i = 0; i < nums.size(); i++){
            mapa[nums[i]] = i+1;
            if(--amout[mapa[nums[i]]] < 0 ){
                formArray.push_back(mapa[nums[i]]);
            }
        }

        return formArray;
    }
};