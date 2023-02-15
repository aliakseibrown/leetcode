class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int temp = 0;
        int ext = 0;
        vector<int> fine;
        reverse(num.begin(), num.end());
        for(int i = 0; i < num.size(); i++){
            temp = num[i]+k%10+ext;
            ext = 0;
            if(temp > 9){
                fine.push_back(temp%10);
                ext = temp/10;
            }else{
                fine.push_back(temp);
            }
            k/=10;
        }
        while(k > 0){
            temp = k%10+ext;
            ext = 0;
            if(temp > 9){
                fine.push_back(temp%10);
                ext = temp/10;
            }else{
                fine.push_back(temp);
            }
            k/=10;
            }
        if(ext != 0){
            fine.push_back(ext);
        }
        reverse(fine.begin(), fine.end());
        return fine;
    }
};
