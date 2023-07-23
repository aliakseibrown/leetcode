class Solution {
public:
    int percentageLetter(string s, char letter) {
        int quantityLetter = 0;
        for(char a: s) if(a == letter) quantityLetter++;
        return round((100*quantityLetter)/s.length());
    }
};
