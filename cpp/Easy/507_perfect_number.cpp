class Solution {
public:
    bool checkPerfectNumber(int num) {
        int dev = 2;
        int sum = 0;
        while(num/dev > 1){
            if(num%dev == 0) sum += num/dev;
            dev++;
        }
        cout<<sum<<" "<<dev;
        return sum == num? true:false;
    }
};
