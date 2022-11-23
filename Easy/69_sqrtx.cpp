class Solution {
public:
    int mySqrt(int x) {
        long long num = x;
        int i = 1;
        while(num * num > x) {
            num = x / i;
            if( num * num < x) return num;
            i++;
            cout<<i<< " "<< num<<"\n";
        }
        return num;
    }
};
