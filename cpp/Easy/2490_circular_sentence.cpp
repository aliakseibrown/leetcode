class Solution {
public:
    bool isCircularSentence(string sentence) {
        if (sentence[0] != sentence[sentence.length()-1]) return false;
        for(int i = 0; i < sentence.length(); i++){
            if( sentence[i] == 32){
                if(sentence[i-1] != sentence[i+1]) return false;
            }
        }
        return true;
    }
};
