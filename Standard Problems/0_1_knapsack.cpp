#include<bits/stdc++.h>
using namespace std;

int knapsack(int wt[], int val[], int W, int n)
{
    int dp[W+1][n+1];
    for(int i=0;i<=W;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(i==0 || j==0)
                dp[i][j] = 0;
            else if(wt[j-1]<=i)
            {
                dp[i][j] = max(val[j-1]+dp[i-wt[j-1]][j-1], dp[i][j-1]);
            }
            else
            {
                dp[i][j] = dp[i][j-1];
            }
            
        }
    }
    return dp[W][n];
}

int main()
{
    int wt[3] = {10,20,30};
    int val[3] = {60,100,120};
    int W = 50;
    cout<<knapsack(wt, val, W, 3)<<endl;
    return 0;
}