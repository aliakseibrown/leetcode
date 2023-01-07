class Solution {
public:
    double myPow(double x, int n) {
        if(x == 1) return x;
        if(n == 0) return 1;
        if (x == -1){
            if(n%2 == 0) return -x;
            else return x;
        }
        if(n < -214748) return 0;
        double temp = x;
        int min = 0;
        if(n < 0){
            n*=-1;
            min++;
        }
        while(n > 1){
            x = x * temp;
            n--;
        }
        if(min>0) x = 1/x;
        return x;
    }
};
