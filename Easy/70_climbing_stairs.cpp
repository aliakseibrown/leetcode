class Solution {
public:
int climbStairs(int n) {
    int ans;
    if(n == 0) return 0;
    if(n == 1) return 1;
    int prev = 1, curr = 1;
    for(int i = 2; i<=n; i++){
        ans = prev + curr;
        prev = curr;
        curr = ans;
    }
    return ans;
    }
};
