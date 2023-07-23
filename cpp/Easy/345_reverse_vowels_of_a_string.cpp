class Solution {
public:
    string reverseVowels(string s) {
       string copy;
       copy = s;
       string vowels;
       for(auto s: s){
           if(s == 65 || s == 97){ // a
               vowels.push_back(s);
           }
           if(s == 69 || s == 101){ //e
               vowels.push_back(s);
           }
           if(s == 73 || s == 105){ //i
               vowels.push_back(s);
           }
           if(s == 79 || s == 111){ //o
               vowels.push_back(s);
           }
           if(s == 85 || s == 117){ //e
               vowels.push_back(s);
           }
       }
       reverse(vowels.begin(), vowels.end());
       int i = 0;
       for(int k = 0; k < copy.length(); k++){
           if(copy[k] == 65 || copy[k] == 97){ // a
               copy[k] = vowels[i];
           }
           if(copy[k] == 69 || copy[k] == 101){ //e
               copy[k] = vowels[i];

           }
           if(copy[k] == 73 || copy[k] == 105){ //i
               copy[k] = vowels[i];

           }
           if(copy[k] == 79 || copy[k] == 111){ //o
               copy[k] = vowels[i];
           }
           if(copy[k] == 85 || copy[k] == 117){ //e
               copy[k] = vowels[i];
           }
           i++;
       }
       return copy;
    }
};
