class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> lastIndx(256,-1);
        int l=0;
        int n=s.length();
        int maxlen=0;
        for(int r=0;r<n;r++){
            if(lastIndx[s[r]]>=l){
                l=lastIndx[s[r]]+1;
            }
            lastIndx[s[r]]=r;
            int length=r-l+1;
            maxlen=max(maxlen,length);
        }
        return maxlen;
    }
};