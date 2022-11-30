class Solution {
public:
    string convertToTitle(int columnNumber) {
        string s;
        while(columnNumber > 26){
            columnNumber= columnNumber - 1;
            s.push_back(char(columnNumber%26) + 65);
            columnNumber = columnNumber / 26;
        }
        s.push_back(char(columnNumber) + 64);
        reverse(s.begin(), s.end());
        return s;
    }
};

//701 = 26*26 + 25 = 676+25
//28 = 28/26 = 1* 26 
//900 = 900/26 = 34>25 = 34*26 + 16
//52 = 52
