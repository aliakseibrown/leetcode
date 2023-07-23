class Solution {
public:
    int pivotInteger(int n) {
        int pivot = n-1;
        int sumPivot = 0;
        int sumN = 0;
        if(n == 1) return 1;
        while(pivot > 0){
            sumN = 0;
            sumPivot = (pivot*(pivot+1))/2;
            for(int i = pivot; i <= n; i++) sumN += i;
            if(sumPivot == sumN) return pivot;
            pivot--;
        }
        return -1;
    }
};
