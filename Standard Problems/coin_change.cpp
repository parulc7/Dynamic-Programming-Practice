#include<bits/stdc++.h>
using namespace std;

int coinChange(int val[], int n, int total)
{
    int dp[n][total+1];
    for(int i=0;i<n;i++)
        dp[i][0] = 1;
    int x, y;
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=total;j++)
        {
            // Ways Including val[i] -> i is still available for use(Unbounded)
            x = (j-val[i] >= 0) ? dp[i][j-val[i]] : 0;
            // Ways Excluding val[i] -> i is not available for use
            y = (i >= 1)? dp[i-1][j] : 0;
            // Total Ways = Including+Excluding
            dp[i][j] = x+y;
        }
    }
    return dp[n-1][total];
}

int main()
{
    int val[] = {1,2,3};
    int total = 4;
    int n = 3;
    cout<<coinChange(val, n, total)<<endl;
    return 0;
}