#include<bits/stdc++.h>
using namespace std;

int SubsetSum(vector<int> &A, int n, int sumSet, int sumTotal)
{
    bool dp[sumTotal+1][n+1];
    for(int i=0;i<=n;i++)
    {
        dp[0][i] = true;
    }
    for(int i=0;i<=sumTotal;i++)
    {
        dp[i][0] = false;
    }
    for(int i=1;i<=sumTotal;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(A[j-1]<=i)
                dp[i][j] = dp[i-A[i-1]][j-1]|dp[i][j-1];
            else
            {
                dp[i][j] = dp[i][j-1];
            }
        }
    }
    int diff = INT_MAX;
    for(int j=sumTotal/2;j>=0;j--)
    {
        if(dp[j][n]==true)
        {
            diff = sumTotal-2*j;
            break;
        }
    }
    return diff;
}

int main(){
    vector<int> A = {1,11, 20, 6};
    int sumTotal = 0;
    for(auto &i:A)
        sumTotal+=i;
    int sumSet = 0;
    cout<<SubsetSum(A, A.size()-1, sumSet, sumTotal)<<endl;
    return 0;
}