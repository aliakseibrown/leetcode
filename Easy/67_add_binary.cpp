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
