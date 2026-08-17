class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> counter;
        for(int n:nums){
            counter[n]++;
        }

        vector<vector<int>> freq(nums.size()+1);
        for(auto entry:counter){
            int frequency=entry.second;
            int number=entry.first;
            freq[frequency].push_back(number);
        }

        vector<int> res;
        for(int i=freq.size()-1;i>=0;i--){
            for(auto nums:freq[i]){
                res.push_back(nums);
                if(res.size()==k){
                    return res;
                }
            }
        }
        return res;
    }
};