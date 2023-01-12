class Solution {
public:
    string largestGoodInteger(string num) {
        string temp = "000";
        string max = "000";
        int k = 0;
        for(int i = 0; i<num.length();i++){
            if(max[0] < temp[0]) max = temp;
            if(num[i] == num[i+1] && num[i] == num[i+2]){
                k++;
                temp.clear();
                temp.push_back(num[i]);
                temp.push_back(num[i]);
                temp.push_back(num[i]);
                cout<<temp<<"\n";
                if(i < num.length()-2) i=i+2;
            }
        }
        if(max[0] < temp[0]) max = temp;
        if(k == 0) return "";
        return max;
    }
};
