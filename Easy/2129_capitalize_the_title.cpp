class Solution {
public:
    string capitalizeTitle(string title) {
        int t = 0;
        for(int i=0; i<= title.size(); i++){
            if(title[i] == 32 || i == title.size()){
                if(t > 2) title[i - t] -=32;
                t = 0;
            }
            if(title[i] > 64){
                if(title[i] < 91){
                    title[i]+=32;
                }
                t++;
            }
        }
        return title;
    }
};
