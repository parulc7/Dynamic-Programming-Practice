#include<bits/stdc++.h>
using namespace std;

int knapsack(int wt[], int val[], int W, int n)
{
    int dp[W+1];
    memset(dp,0, sizeof(dp));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=W;j++)
        {
            if(wt[i]<=j)
            {
                dp[j] = max(dp[j], dp[j-wt[i]]+val[i]);
            }
        }
    }
    return dp[W];
}

int main()
{
    int wt[3] = {5, 10,15};
    int val[3] = {10,30,20};
    int W = 100;
    cout<<knapsack(wt, val, W, 3)<<endl;
    return 0;
}