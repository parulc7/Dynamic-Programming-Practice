# Dynamic-Programming-Practice
A practice repository for all the dp questions that I practice alongwith resources

Dynamic Programming Patterns - 

## 0-1 Knapsack Type Problems
* Allow one item to be used once only. If that item is not considered in a turn, move to the next element. i.e. `minimize or maximize(f(i-1, j), f(i-1, j-x[i]))`. Notice here we are moving to (i-1)th element everytime, whether we select ith element or not because of the condition that only item can be used once only 

* If we are counting the number of ways of selecting such that each item can be used once only, then the number of ways of selecting (based on the condition) = f(i-1,j)+f(i-1,j-x[i]).

* e.g. Subset Sum Problem, Equal Sum Partition Problem, Minimum Subset Difference Problem etc.

## Unbounded Knapsack Type Problems
* Allow to use one item multiple times. If that item is not considered in a turn, move to the next item. But if selected, it would be still available for selection again. i.e. `minimize or maximize(f(i-1,j), f(i,j-x[i]))`. Notice here we are not moving to the (i-1)th element once ith element is selected because here one item can be used multiple times. Hence, ith element will be available for selection again.

* If we are counting the number of ways of selecting such that each item can be used multiple times, then the number of ways of selecting(based on the condition) = f(i-1,j)+f(i, j-x[i])

* e.g. Rod Cutting Problem, Coin Change Problem, Ribbon Cutting etc.