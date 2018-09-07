# 291A - Spyke Talks

The problem of spyke talks quite simple, first we have 2 line input, for the first input is integer for the number of the secretaries,
and for the next line input, contains n-separated integers, let's say we name it _id_ , so it's equal the number of the call session of
the secretary, for example for the input :

5 (it means there's 5 secretary)

1 5 1 3 2 (call session)

After input the number, im sorting it using **Counting Sort**, then as you can see, after the call session sorted, it sorted become 1 1 2 3 5,
it means there are 1 call connects consist of 2 people, if there's more than 2 people, the output will be -1.
[Submission Link](http://codeforces.com/contest/291/submission/42599409) | [Problem Link](http://codeforces.com/problemset/problem/291/A)

# 768A - Oath of the Night's Watch

In this problem, we need to find how many stewards will Jon Snow support,Jon Snow likes to support a steward only if there exists 
at least one steward who has strength strictly less than him and at least one steward who has strength strictly greater than him.

So the example input as follows:

We input 3 steward and for the values that assigned for the steward is 3 1 5, then it'll sorted become 1 3 5, im using **Shell Sort**,
and for the output will be 1, because number 3 has one that less than and one that has greater than, and if there are no steward that
less than and greater than, the output will be 0.

# 230A - Dragons
