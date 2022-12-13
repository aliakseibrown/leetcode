class Solution {
public:
    int reverse(int x) {
        int dem = 1;
        int a = 1;
        int key = 0;
        string temp;
        string max = "2147483647";
        if( x > 2147483647) return 0;
        if( x < -2147483647) return 0;
        if(x < 0){
            a = -1;
            x *=-1;
        }

        while( x > 0){
            temp.push_back(x%10 + 48);
            x = x/10;
        }
        int size = temp.length();
        if(size == 10){
            for( int i = 0; i< max.length(); i++){
                if(temp[i] == max[i]) key++;
                if(temp[i] > max[i] && key == i) return 0;
            }
        }
        for(int i = 0; i < temp.length(); i++){
            dem = pow(10,(size-1));
            x = x + ((temp[i] - '0') * dem);
            size--;
        }
        return x*a;
    }
};
