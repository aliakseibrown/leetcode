class Solution {
public:
    bool isPerfectSquare(int num) {
        long i = 1;
        long answer = num;
        while(answer <= num){
            answer = i*i;
            if(answer == num) return true;
            i++;
        }
        return false;
    }
};
