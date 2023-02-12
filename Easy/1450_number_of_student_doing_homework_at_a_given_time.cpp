class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int 
queryTime) {
        int num = 0;
        for(int i = 0; i< startTime.size(); i++){
            if(endTime[i]>= queryTime){
                if(startTime[i] <= queryTime){
                    num++;
                }
            }
        }
        return num;
    }
};
