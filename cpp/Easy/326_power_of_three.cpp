class Solution {
public:
    bool isPowerOfThree(int n) {
        while(n > 0){
            if(n == 1) return true;
            if(n%3 == 0) n = n/3; 
            else return false;
        }
        return false;
    }
};
