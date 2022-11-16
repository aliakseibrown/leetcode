class Solution {
public:
    bool isPalindrome(int x) {
        if( x < 0) return false; 
        string vec;
        while(x != 0){
            vec.push_back(x%10);
            x = x/10;
        }
        int right = vec.length()-1;
        while(x < right){
            if(vec[x]!= vec[right]) return false;
            x++;
            right--;
        }
        return true;
    }
};
