class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max=0;
        int sum = 0;
        for( int i = 0; i < accounts.size(); i++){
            sum = 0;
            for( int s = 0; s < accounts[i].size(); s++){
                sum+=accounts[i][s];
                if( sum>max) max=sum;
            }
        }
        return max;
    }
};