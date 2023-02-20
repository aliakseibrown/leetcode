class Solution {
public:
    int minimumSum(int num) {
        vector<int>n;
        int sum = 0;
        while(num>0){
            n.push_back(num%10);
            num/=10;
        }
        sort(n.begin(), n.end());
        sum = (n[0]*10+n[2]) + (n[1]*10+n[3]);
        cout<<n[2];
        return sum;
    }
};
