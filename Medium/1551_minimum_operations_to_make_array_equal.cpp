class Solution {
public:
    int minOperations(int n) {
        int sum = 0;
        int k = 2*n - 1;
        while(k > n){
            sum += k-n;
            k-=2;
        }
        return sum;
    }
};
