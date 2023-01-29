class Solution {
public:
    bool isStrictlyPalindromic(int n) {
        string hat;
        string big;
        int copy = n;
        for(int base = 2; base < 11; base++){
            copy = n;
            while(copy > 0){
                hat.push_back(copy%base+48);
                copy/=base;
            }
            big = hat;
            reverse(hat.begin(), hat.end());
            if(big != hat) return false;
            big.clear();
            hat.clear();
        }
        return true;
    }
};
