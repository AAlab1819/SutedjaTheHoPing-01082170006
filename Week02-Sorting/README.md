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
less than and greater than, the output will be 0. When i used the sorting library, the code works, but using the **Shell Sort** the code works also but the result is Time Limit Exceeded/

[Submission Link](http://codeforces.com/contest/768/submission/42598535) | [Problem Link](http://codeforces.com/problemset/problem/768/A)

# 230A - Dragons

The Problem of Dragons is simple, but for the code quite complex, we use struct, so the first input are **s** that contains Kirito's
strength and **n** that contains the dragon's amount, then we input the dragon's strength and the bonus if Kirito succeed to defeat the
dragon in condition that dragon's strength are less than Kirito's strength, after inputting all of the bonus point and the strength, i used **Shell Sort** for this case, because it's quite simple in using of Shell Sort, after all of the strength are sorted, I for looped all of the strength and bonus array, to count whether Kirito's strength are greater than the dragon's strength, and Kirito can't move or go to the next dragon if he can't defeat the dragon, so for the output will be **NO**, but if Kirito succeed to defeat all of the dragon, the output will be **YES**.

[Submission Link]() | [Problem Link](http://codeforces.com/problemset/problem/230/A)
