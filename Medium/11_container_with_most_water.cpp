class Solution {
public:
    int maxArea(vector<int>& height) {
        int sum = 0;
        int preSum = 0;
        int size = height.size()-1;
    
        unordered_map<int, int>map;
        vector<pair<int,int>>rait;
        
        for(int i = 0; i < height.size(); i++){
            map[size-i] = height[i];
        }
        for( auto s: map){
            rait.push_back(make_pair(s.second, s.first));
        }
        sort(rait.begin(), rait.end(), greater());

        for(auto s: rait){
            cout<<s.first<<" "<<s.second<<endl;
        }
        for(int k = 1; k < size; k++){
            sum = rait[k].first * (rait[0].second - rait[k].second);
            cout<<sum<<endl;
            if(sum > preSum){
                preSum = sum;
            }
        }
        return preSum;
    }
};
