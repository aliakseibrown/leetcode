class Solution {
public:
    int myAtoi(string s) {
        int answer = 0;
        string nums;
        string temp;
        string max = "2147483647";
        int min = 1;
        int key = 0;
        int size;
        int valid = 0;
        
        for(auto a:s){
            if(a == 32 && temp.length()==0 ) continue;
            temp.push_back(a);
        }
        if( temp[0] == 45){
            min = -1;
            if( temp[1] == 45) return 0;
            if( temp[1] < 44 || temp[1] > 57) return 0;
            if( temp[1] == 46 || temp[1] == 47) return 0;
        }
    
        if( temp[0] < 43 || temp[0] > 57) return 0;
        if( temp[0] == 46 || temp[0] == 47) return 0;
        if( temp[0] == 43){
            if( temp[1] == 45) return 0;
            if( temp[1] < 44 || temp[1] > 57) return 0;
            if( temp[1] == 46 || temp[1] == 47) return 0;
        }
        
        for(auto a:temp){
            if(a > 47 && a < 58) {
                nums.push_back(a);
                valid++;
            }
            if(a == 32 && valid <= 0) continue;
            if(a < 44 && valid > 0) break; 
            if(a == 46 && valid > 0) break;
            if(a == 47 && valid > 0) break;
            if(a == 45 && valid > 0) break;
            if(a > 58 && valid > 0) break;
        }
        temp.clear();
        for(auto a:nums){
            if( a == 48 && temp.length()==0 ) continue;
            temp.push_back(a);
        }
        size = temp.length();
        if(size > 10 && min == -1) return -2147483648;
        if(size > 10 && min == 1) return 2147483647;
        if(size == 10){
            for(int i = 0; i < 10; i++ ){
                if(temp[i] == max[i]) key++;
                if( min == 1){
                    if(temp[i] > max[i] && key == i) return 2147483647;
                }
                if( min == -1){
                    if(temp[i] > max[i] && key == i) return -2147483648;
                }
            }
           
        }
        valid = 2147483647;
        for(int i = 0; i < temp.length(); i++ ){
            key = (temp[i] - 48) * pow(10, size-1);
            valid = valid - key;
            if(valid < 0) return 0;
            size--;
        }
        valid = 2147483647 - valid;
        return valid*min;
    }
};
