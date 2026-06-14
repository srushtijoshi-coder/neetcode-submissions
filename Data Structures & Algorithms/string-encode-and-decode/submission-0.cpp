class Solution {
public:

    string encode(vector<string>& strs) {

        string encoded;

        for(auto &s : strs){
            encoded += to_string(s.size()) + '#' + s;
        }

        return encoded;

    }

    vector<string> decode(string s) {
        vector<string>result;
        int i=0;
        int n = s.size();

        while(i<n){
            int len=0;

            while(s[i] != '#'){
                len = len * 10 + (s[i] -'0');
                i++;
            }

            i++;  // skip #


            string word = s.substr(i,len);
            result.push_back(word);

            i += len;
        }

        return result;

    }
};
