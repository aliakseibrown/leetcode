class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
    int count = 0;
    
    for(int i = 0; i< words.size(); i++){
        int sum = 0;
        for(int j = 0; j < words[i].length(); j++) 
if(allowed.find(words[i][j]) != string::npos) sum++;
        if(sum == words[i].length())
            count++;
    }
    
    return count;
}
};
