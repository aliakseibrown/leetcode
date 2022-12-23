class Solution {
public:
    string intToRoman(int num) {
        
map<int,char>symbols{{1,'I'},{5,'V'},{10,'X'},{50,'L'},{100,'C'},{500,'D'},{1000,'M'}};
        string roman;
        int remains = 0;
        int dem = 1;
        while(num > 0){
            remains=num%10;
            if(remains != 0 && remains < 10){
                if(remains == 4 || remains == 9){
                    roman.push_back(symbols[(remains+1)*dem]);
                    roman.push_back(symbols[dem]);
                    num-=remains;
                }else if(remains == 5){
                    roman.push_back(symbols[remains*dem]);
                    num-=5;
                }else{
                    roman.push_back(symbols[dem]);
                    num--;
                }
            }
            if(num%10 == 0){
                num/=10;
                dem*=10;
            }
        }
        reverse(roman.begin(),roman.end());
        return roman;
    }
};
