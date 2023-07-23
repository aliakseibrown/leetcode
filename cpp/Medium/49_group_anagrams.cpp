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

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> sortedStrs;
        vector<string> unsortedStrs;
        vector<string> perfectString;


        for(int i = 0; i <strs.size(); i++){
            sortedStrs.push_back(strs[i]);
            sort(sortedStrs[i].begin(),sortedStrs[i].end());
        }
        unsortedStrs = sortedStrs;
        sort(sortedStrs.begin(),sortedStrs.end());
        perfectString = removeAnagrams(sortedStrs);


        vector<vector<string>> collection(perfectString.size());

        for( int i = 0; i < perfectString.size(); i++){
            for( int s = 0; s < strs.size(); s++){
                if(perfectString[i] == unsortedStrs[s]){
                    collection[i].push_back(strs[s]);
                }
            }
        }

        return collection;
    }
};