class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n < 1) return false;
        int loog = log(n)/log(2);
        if(pow(2,loog) == n) return true;
        return false;
    }
};
