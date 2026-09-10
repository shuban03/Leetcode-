class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //follows kadane algorithmm
        int sum=0;
        int n=nums.size();
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            sum+=nums[i];

            if(sum>maxi){
                maxi=sum;
            }
            //dont carry negetive sum to next step
            if(sum<0){
                sum=0;
            }
            
        }
        return maxi;
    }
};