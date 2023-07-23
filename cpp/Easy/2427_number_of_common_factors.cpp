class Solution {
public:
    int commonFactors(int a, int b) {
        int d = 1;
        int sum = 0;
        while(d <= a){
            if(a%d == 0 && b%d == 0){
                sum++;
            }
            d++;
        }
        return sum;
    }
};
