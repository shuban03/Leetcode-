class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> count;
        for(int num:nums){
            count[num]++;
        }
        for(auto it:count){
            if(it.second==1){
                return it.first;
            }
        }
        return -1;
    }
};