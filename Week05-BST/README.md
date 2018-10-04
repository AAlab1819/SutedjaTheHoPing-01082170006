# 115A - Party

The problem of 115A is to count how many group that can be made, for example for 5 employee, if there's "-1" employee, it means 
the employee don't have manager, and when the party held, an employee is prohibited to meet their manager(superior).
The first line input will be the n number of employees.

The next input are the i-th employees.

And for the output will be the number of groups that has been formed.

```
Input
5
-1
1
2
1
-1
Output
3
```
As we can see from the example given, 3 groups formed, from employee 1, employee 2 and 4, and employee 3 and 5, the employee can be
formed with their superior, but not the immediate manager.

Complexity: *O*(*n*<sup>2</sup>)<br>
[Submission Link](http://codeforces.com/contest/115/submission/43725179) | [Problem Link](http://codeforces.com/contest/115/problem/A)<br>

# 913B - Christmas Spruce
The problem here is about, making a rooted tree, which is there are vertex v and u, v as a parent 
and u as a children, a tree will called a spruce if it's every non-leaf vertex has at least 3 leaf children.

The first input will be one integer contains the number of vertices in the tree, and 
each of the next n-1 lines contains one integer that contains the index of the parent i-th vertex.

Last step, we have to calculate the amount of children in the vertex. Then use for loop, in condition if it has more than
0 but less than 3, it will print out "NO", and if it's true, it will print "YES"

Complexity:O(n)<br>
[Submission Link](http://codeforces.com/contest/913/submission/43790100) | [Problem Link](http://codeforces.com/contest/913/problem/B)

# 4C - Registration System

The problem is quite simple, we just have to make a registration system, everytime a new user wants to register,
they sends to the system a request with his name, if the name doesn't exist in the system, it is inserted to the database, and the use
gets the response OK. If the name already exists, the system will make a new user name, by putting number start from 1 behind the name (name1, name 2, ...).

The first input contains number n, and the following n line contains the requests to the system. 

The output will print n lines, which response to the requests: OK in case of success in registration, 
or prompt with a new name, if the requested name is already taken.

Complexity: O(nlogn)<br>
[Submission Link](http://codeforces.com/contest/4/submission/43733274) | [Problem Link](http://codeforces.com/problemset/problem/4/C)<br>
