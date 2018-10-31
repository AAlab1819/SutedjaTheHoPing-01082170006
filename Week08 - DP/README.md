#433B - Kuriyama Mirai's Stones

From this problem, we are given a number of stones, each of the stones have their own prices.<br> 
The questions that is possible from the problem are type one and two:<br> 
1. The first type will be the total of stone's cost from l to r and the second type will be the total of<br> 
2. The cost of the stones from l to r in an non-decreasing order.<br>

The first line input will be the number of the stones that followed by cost of each stones.<br>
Then it is followed with how many questions will their be. Each question consists of type, l, and r. 
The output is the sum of numbers from l to r according its type. 

Complexity Worst Case: O(nlogn)
[Problem Link](http://codeforces.com/problemset/problem/433/B) | [Submission Link](http://codeforces.com/contest/433/submission/45121238)

#913C - Party Lemonade

From this problem, we have to find the cheapest cost to fullfill the lemonade liters needed.<br> 
Each bottle have different volume and different cost too, and the volume of the i-th bottle will be 2i-1 liters.<br> 
You can buy more than a bottle with the same volume. You can have more lemonade in liters than the required number.<br> 
The first input will be the number of the bottle types and the required lemonade in liters.<br> 
The second input will be the price of the i-th bottle.<br> 
The output is to print thew money that we spend to accomplish the required lemonade.<br> 
The first solution here is to store the cost for each type of bottle. <br>
Then, we will check if we can buy 2 bottle of smaller type of bottle with cheaper price rather than 1 bottle with higher price.<br> 
Then after all done we loop all the bottles from the highest liters down to the smallest liters.<br>
Then we will see is it cheaper to buy 2 of the biggest bottle if it is still left to 
fullfill or 1 bottle and other bottle to fullfill the need of the lemonade. 

Complexity Worst Case: O(n)

[Problem Link](http://codeforces.com/problemset/problem/913/C) | [Submission Link](http://codeforces.com/contest/913/submission/45142371)
