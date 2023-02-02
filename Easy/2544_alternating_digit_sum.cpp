class Solution {
public:
    int alternateDigitSum(int n) {
        int i = 0;
        int sum = 0;
        int copy = n;
        while(copy > 0){
            copy/=10;
            i++;
        }
        cout<<i;
        while(n>0){
            if(i%2 == 0) sum-=(n%10);
            if(i%2 != 0) sum+=(n%10);
            i--;
            n/=10;
        }
        return sum;
    }
};
