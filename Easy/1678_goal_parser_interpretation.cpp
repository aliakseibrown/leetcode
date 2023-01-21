class Solution {
public:
    string interpret(string command) {
        string a;
        for(int i =0;i<command.size(); i++){
            if(command[i] == 40 && command[i+1] == 41){
                a.push_back('o');
                continue;
            }
            if(command[i] == 40) continue;
            if(command[i] == 41) continue;
            a.push_back(command[i]);
        }
        return a;
    }
};
