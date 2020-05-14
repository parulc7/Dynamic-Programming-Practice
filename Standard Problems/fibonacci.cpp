#include<bits/stdc++.h>
using namespace std;


void multiply(vector<vector<int>> &A, vector<vector<int>> &B)
{
    int x = A[0][0]*B[0][0] + A[0][1]*B[1][0];
    int y = A[0][0]*B[1][0] + A[0][1]*B[1][1];
    int z = A[1][0]*B[0][0] + A[1][1]*B[1][0];
    int w = A[1][0]*B[1][0] + A[0][1]*B[1][1];

    A[0][0] = x;
    A[0][1] = y;
    A[1][0] = z;
    A[1][1] = w;
}

void power(vector<vector<int>> &A, int n)
{
    if(n==0 || n==1)
        return;
    vector<vector<int>> M = {{1,1},{1,0}};
    power(A, n/2);
    multiply(A, A);
    if(n%2!=0)
        multiply(A, M);
}

int fib(int n)
{
    if(n<=1)
        return 1;
    vector<vector<int>> f = {{1,1},{1,0}};
    power(f, n-1);
    return f[0][0];
}

int main()
{
    int n;
    cin>>n;
    cout<<fib(n);
    return 0;
}