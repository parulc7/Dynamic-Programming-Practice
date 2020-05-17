#include<bits/stdc++.h>
using namespace std;
#define maxN 100
#define MAX_SUM 50
#define MIN_SUM 50
#define BASE 50


int dp[maxN][MAX_SUM+MIN_SUM];
bool calculated[maxN][MAX_SUM+MIN_SUM];

int countSubsetSum(vector<int> &A, int S, int i, int n)
{
    if(i==n)
    {
        if(S==0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
        
    }
    if(calculated[i][S+BASE])
        return dp[i][S+BASE];
    calculated[i][S+BASE] = true;
    dp[i][S+BASE] = countSubsetSum(A, S, i+1, n)+countSubsetSum(A, S-A[i], i+1, n);
    return dp[i][S+BASE];
}

int main(){
    vector<int> A = {1,2,3,3};
    int S = 6;
    cout<<countSubsetSum(A, S, 0, 4)<<endl;
    return 0;
}