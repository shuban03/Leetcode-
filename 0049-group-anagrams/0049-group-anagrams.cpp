class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> map;
        for(auto s:strs){
            string k=s;
            sort(k.begin(),k.end());
            map[k].push_back(s);
        }
        vector<vector<string>> res;
        for(auto m:map){
            res.push_back(m.second);
        }
        return res;
    }
};