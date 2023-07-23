class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;
        for(auto o:operations){
            for(auto f:o){
                if(f == 43){
                    x++;
                    break;
                }
                if(f == 45){
                    x--;
                    break;
                }
            }
        }
        return x;
    }
};


