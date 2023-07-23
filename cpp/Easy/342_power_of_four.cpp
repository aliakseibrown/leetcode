class Solution {
public:
    bool isPowerOfFour(int n) {
        while(n > 0){
            if(n == 1) return true;
            if(n%4 == 0) n = n/4; 
            else return false;
        }
        return false;
    }
};
