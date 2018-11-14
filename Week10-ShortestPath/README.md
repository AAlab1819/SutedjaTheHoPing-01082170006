# 20C - Dijkstra

From this problem we have to find the path. And we need to use a tupler. From the code needed a tupler because we need to store the running cost, the source, and the destination and we have to keep track of the path by using a source array, which the index stores the previous path before reaching the index. Perform Dijkstra's algorithm, but keep track of the source. After we using the Dijkstra algorithm we have to find the process using stack and pop them all up. This will return the path so that we can find the minimum path. 

Worst Case: O(E x log(V))

[Submission Link](http://codeforces.com/contest/20/submission/45700365) | [Problem Link](http://codeforces.com/contest/20/problem/C)

# 601A - The Two Routes

From this problem, we have to find the longest time from a vehicle from travelling for travelling from 1 city to another.<br>
So for example :
```
4 2
1 3
3 4
```
As we can see that from city 1 to 3 and 3 to 4 represents the railway, while other like 1 to 4, 1 to 2, and other that not inputted is a road so, if there's a railway or path from 1 city to another, we have to find the time that the bus took, and the output will be 2, because
the shorest road will be, 1 -> 2 -> 4.
Worst Case: O(n²)

[Submission Link](http://codeforces.com/contest/601/submission/45700049) | [Problem Link](http://codeforces.com/contest/601/problem/A)
