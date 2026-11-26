class Solution {
public:
int fibo(int n,vector<int>&dp)
{
    //base case
    if(n<=1)
    return n;
    //already calculated
    if(dp[n] != -1)
    return dp[n];

    return dp[n]=fibo(n-1,dp)+fibo(n-2,dp);
}
    int fib(int n) {
        if(n<=1)
        return n;
        vector<int>dp(n+1,-1);
        dp[0]=0;
        dp[1]=1;//cannot access it
        for(int i=2;i<=n;i++)
        dp[i]=dp[i-1]+dp[i-2];
        return dp[n];
        
    }
};