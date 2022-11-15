class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        unordered_map<char, string>map{{'a',".-"},
        {'b',"-..."},
        {'c',"-.-."},
        {'d',"-.."},
        {'e',"."},
        {'f',"..-."},
        {'g',"--."},
        {'h',"...."},
        {'i',".."},
        {'j',".---"},
        {'k',"-.-"},
        {'l',".-.."},
        {'m',"--"},
        {'n',"-."},
        {'o',"---"},
        {'p',".--."},
        {'q',"--.-"},
        {'r',".-."},
        {'s',"..."},
        {'t',"-"},
        {'u',"..-"},
        {'v',"...-"},
        {'w',".--"},
        {'x',"-..-"},
        {'y',"-.--"},
        {'z',"--.."}};
        string m;
        set<string> set;
        for(int k = 0; k < words.size(); k++){
            m.clear();
            for(int i = 0; i < words[k].size(); i++){
                m = m + map[words[k][i]];
            }
            set.insert(m);
        }
        return set.size();
    } 
};
