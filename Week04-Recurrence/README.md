# 269B - Buttons

We just have to find the worst case scenario in each buttons inputted, so as we see the input and output in the question, the pattern
has found, *(n - 1) * n * (n + 1) / 6 + n* , so just input the buttons, and just print the pattern, its simple, just have to find the 
pattern first.

The complexity of this problem is O(1)

[Submission Link](http://codeforces.com/contest/268/submission/43410024) | [Problem Link](http://codeforces.com/problemset/problem/268/B)

# 598D - Igor In the Museum

Igor is in the msueum which represented as rectangular n x m, if empty cells will be marked with
*'.'* and if it's marked *'*', So the first line input contains 3 integers, n,m, and k 
(the museum dimensions and the number of starting positions to process)

Each k lines contains 2 integers x (row) and y (column) which is Igor's starting positions.

Row are numbered from top to bottom and columns from left to right.

then print the k integers which the maximum number of pictures, that Igor can see.

The solution that I used is floodfill, the purpose of using floodfill is to search 
the movement of Igor, after all, just store all the answer and print it.

The complexity for this problem is O(nm)

[Submission Link](http://codeforces.com/contest/598/submission/43440793) | [Problem Link](http://codeforces.com/problemset/problem/598/D)
