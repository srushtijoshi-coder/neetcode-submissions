class Solution {
public:
string getHash(string &s) {
        vector<int> freq(26, 0);

        for(char ch : s)
            freq[ch - 'a']++;

        string hash = "";
        for(int i = 0; i < 26; i++) {
            hash += to_string(freq[i]);
            hash += "#";   // separator
        }
        return hash;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string, int> mp;

        for(int i = 0; i < strs.size(); i++) {
            string key = getHash(strs[i]);

            if(mp.find(key) == mp.end()) {
                mp[key] = res.size();
                res.push_back({});
            }

            res[mp[key]].push_back(strs[i]);
        }

        return res;
    }
};