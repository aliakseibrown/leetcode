class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        ios_base::sync_with_stdio(false);  //turns off buffer 
synchronization
        cin.tie(NULL); //unties cin from cout and the information won't be 
rewriten to cout<< that will increase the speed of the input; 

        unordered_map<int,int>mapa;
        int rounds = 0;
        for(auto t:tasks){
            mapa[t]++;
        }
        for(auto m:mapa){
            if(m.second > 3){
                rounds = rounds + ((m.second + 2)/3);
            }else{
                if(m.second == 1) return -1;
                rounds++;
            }
        }
        return rounds;
    }
};

