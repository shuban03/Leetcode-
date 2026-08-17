class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> map;

        for(auto s:strs){                //fill the map
            string k=s;
            sort(k.begin(),k.end());
            map[k].push_back(s);
        }
        vector<vector<string>> res;
        for(auto it:map){                  //fill the result
            res.push_back(it.second);
        }
        return res;
    }
};