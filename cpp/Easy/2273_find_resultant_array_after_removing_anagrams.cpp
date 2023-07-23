class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string> completeString, temp;

        int a = 0;
        if( words.size() == 1){
            return words;
        }

        for( int i = 0; i < words.size(); i++){
            temp.push_back(words[i]);
            sort(temp[i].begin(), temp[i].end());
        }

        for( int s = 1; s < temp.size(); s++){
            if( temp[a] != temp[s]){
                completeString.push_back(words[a]);
                a = s;
            }
            if( s == (temp.size()-1) && temp[a] == temp[s]){
                completeString.push_back(words[a]);
            }
        }
        return completeString;
    }
};


