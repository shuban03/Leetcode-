class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums3=nums1;
        int x=nums1.size();
        int y=nums2.size();
        for(int i=0;i<y;i++){
            nums3.push_back(nums2[i]);
        }
        sort(nums3.begin(),nums3.end());
        int l=0;
        int r=nums3.size()-1;
        int mid;
        if(nums3.size()%2==1){
        mid=(l+r)/2;
        return nums3[mid];
        }else{
            mid=(l+r)/2;
            double ans=((double)nums3[mid]+(double)nums3[mid+1])/2;
            return ans;
        }
        return -1;
    }
};