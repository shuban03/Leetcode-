class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()==0){
            return 0;
        }
        int maxseq=1;
        int count=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]+1){
                count++;
                maxseq=max(maxseq,count);
            }else if(nums[i]==nums[i-1]){

               }else{
                count=1;
            }
        }
        return maxseq;
    }
};