class Solution {
public:
    int fib(int n) {
        vector<int> store(n+1,-1);
        int ans=solve(n,store);
        return ans;
    }

    int solve(int n,vector<int>& store){
        if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }

        if(store[n]!=-1){
            return store[n];
        }

        return store[n]=solve(n-1,store)+solve(n-2,store);
    }
};