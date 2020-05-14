# Dynamic-Programming-Practice
A practice repository for all the dp questions that I practice alongwith resources

Dynamic Programming Patterns - 

## Knapsack Type Problems

1. 0-1 Knapsack => If you select the current element, reduce the available capacity(W-wt[n-1]) + move to next element and if you don't select the current element, the capacity remains the same(W) and we move to the next element

2. Equal Subset Sum Partition => For the partition sum to be equal, it must be divisible by 2. If not, return false. If it is even, we can calculate the sum of the array and divide it by 2 to get the sum of the partition we are looking for. Now it is just like 0-1 Knapsack Problem.
