class Solution {
public:
    bool isAnagram(string s, string t){

        if(s.size() != t.size()){
            return false;
        }
        unordered_map<char, int> charcount;

        for(char ch: s){
            charcount[ch] += 1;
        }

        for(char ch :t){
            charcount[ch] -= 1;
        }

        for(auto pair : charcount){
            if(pair.second != 0){
                return false;
            }
        }
        return true;
    }
};
