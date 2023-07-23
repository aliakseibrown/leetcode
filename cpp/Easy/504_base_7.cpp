class Solution {
public:
    string convertToBase7(int num) {
        int base = 0;
        string str;
        bool min = false;
        if(num < 0){
            num*=-1;
            min = true; 
        }
        if(num < 7){
            if(min) str.push_back(45);
            str.push_back(num+48);
            return str;
        }
        while(num > 0){
            base = num%7;
            str.push_back(base+48);
            num/=7;
        }
        if(min) str.push_back(45);
        reverse(str.begin(), str.end());
        return str;
    }
};
