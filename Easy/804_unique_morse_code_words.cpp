class Solution {
public:
//     int uniqueMorseRepresentations(vector<string>& words) {
//         unordered_map<char, string>map{{'a',".-"},
//         {'b',"-..."},
//         {'c',"-.-."},
//         {'d',"-.."},
//         {'e',"."},
//         {'f',"..-."},
//         {'g',"--."},
//         {'h',"...."},
//         {'i',".."},
//         {'j',".---"},
//         {'k',"-.-"},
//         {'l',".-.."},
//         {'m',"--"},
//         {'n',"-."},
//         {'o',"---"},
//         {'p',".--."},
//         {'q',"--.-"},
//         {'r',".-."},
//         {'s',"..."},
//         {'t',"-"},
//         {'u',"..-"},
//         {'v',"...-"},
//         {'w',".--"},
//         {'x',"-..-"},
//         {'y',"-.--"},
//         {'z',"--.."}};
//         int much = 0;
//         string temp;
//         for(int k = 0; k< words.size(); k++){
//             for(char s: words[k]){
//                 temp.push_back(map[s]);
//             }
//             cout<<temp<<"\n";

//         }
//         return much;
//     }
// };

 int uniqueMorseRepresentations(vector<string>& words) {
        set<string> s;
        vector<string> vec 
={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        string st;
        for(int i=0; i<words.size(); i++){
            st = "";
            for(int j=0; j<words[i].length(); j++)
                st+=vec[words[i][j]-'a'];
            s.insert(st);
        }
        return s.size();
    }
};
