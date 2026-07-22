class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string ans="";
        helper(res,ans,n,0,0);
        return res;
    }

    void helper(vector<string>& res,string& ans,int n,int openN,int closeN){
       if(openN==closeN && openN==n){
        res.push_back(ans);
       }
       if(openN<n){
        ans+='(';
        helper(res,ans,n,openN+1,closeN);
        ans.pop_back();
       }
       if(closeN<openN){
        ans+=')';
        helper(res,ans,n,openN,closeN+1);
        ans.pop_back();
       }
    }
};