class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq(nums.size());
        for(int num:nums){
            freq[num]++;
        }

        vector<vector<int>> bucket(nums.size()+1);
        for(auto entry:freq){
            int frequency=entry.second;
            int number=entry.first;
            bucket[frequency].push_back(number);
        }
        
        vector<int> res;
        for(int i=bucket.size()-1;i>=0;i--){
            for(auto num:bucket[i]){
                res.push_back(num);
                if(res.size()==k){
                    return res;
                }
            }
        }
        return res;

    }
};