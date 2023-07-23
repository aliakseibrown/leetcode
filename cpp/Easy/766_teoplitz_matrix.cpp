class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int s =  matrix.size();
        for(int s = 1; s< matrix.size(); s++){ 
            for(int i = 1; i< matrix[0].size(); i++){ 
                if(matrix[s][i] != matrix[s-1][i-1]  ) return false;
            }
        }
        return true;
    }
};


