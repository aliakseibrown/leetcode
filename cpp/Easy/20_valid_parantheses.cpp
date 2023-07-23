class Solution {
public:
    bool isValid(string s) {
        int num;
        int l = 0;
        int r = s.length()-1;
        
        if(s.length()%2 != 0) return false;
        
        if(s[1] - s[0] == 1 || s[1] - s[0] == 2 ){
            for( int i = 0; i< s.length(); i+=2){
            if(s[i] == 40 && s[i+1] == 41) continue;
            if(s[i] == 91 && s[i+1] == 93) continue;
            if(s[i] == 123 && s[i+1] == 125) continue;
            return false;
        }
           
        }else{
         while( l < r){
            num = s[l] - s[r];
            cout<<num<<endl;
            if(num == 0) return false;
            if(num > 0 or num < -3) return false;
            l++;
            r--;
            }
        }

        return true;
    }
};

//40 - (
//41 - )
//91 - [
//93 - ]
//123 - {
//125 - }


not successful 
