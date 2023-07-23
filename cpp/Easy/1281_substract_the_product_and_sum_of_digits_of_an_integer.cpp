class Solution {
public:
    int subtractProductAndSum(int n) {
        int prod = 1;
        int sum = 0;
        int b = 0;
        while(n > 0){
            b = n%10;
            sum+=b;
            prod*=b;
            n/=10;
        }
        return prod-sum;
    }
};
