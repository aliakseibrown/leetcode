class Solution {
public:
    string addBinary(string a, string b) {
        long numA = stoi(a, 0, 2);
        long numB = stoi(b, 0, 2);
        numA = numA + numB;
        a.erase();
        if(numA == 0) return "0";
        while(numA > 0){
            if(numA%2 == 1) a.push_back('1');
            if(numA%2 == 0) a.push_back('0');
            numA=numA/2;
        }
        reverse(a.begin(), a.end());
        return a;
    }
};

//does not correct with long strings


class Solution {
public:
    string addBinary(string a, string b) {
        int lenA = a.length()-1;
        int lenB = b.length()-1;
        int sum = 0;
        string c;
        while(lenA >= 0 || lenB >= 0||sum){
            if(lenA>=0){
                sum += a[lenA] - '0';
                lenA--;
            }
            if(lenB>=0){
                sum += b[lenB] - '0';
                lenB--;
            }
            c+= (sum%2 + '0');
            sum = sum / 2;
        }
        reverse(c.begin(), c.end());
        return c;
    }
};
//2021 = 1010 + 1011 = 10101

//correct one
