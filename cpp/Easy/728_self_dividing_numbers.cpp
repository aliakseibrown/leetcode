class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        int dev = 0;
        vector<int> self;
        while(left <= right){
            dev = left;
            if(dev < 10){
                self.push_back(dev);
                left++;
                continue;
            }
            while(dev > 0){
                if(dev%10 == 0){
                    break;
                }
                if(left%(dev%10) == 0){
                    dev/=10;
                }else{
                    break;
                }
                if(dev == 0){
                    self.push_back(left);
                    break;
                }
            }
            left++;
        }
        return self;
        
    }
};
