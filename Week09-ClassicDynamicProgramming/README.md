# 147 - Dollars

In this problem a few key points are, the amount doesn’t exceed $300.00 and will exit / terminate program for the input of 0.00.<br>
The
amount can be / is a floating point number.<br>
There are different values that can be used make up the decimal and the fractional portion<br>
Output should be justified with width 6 before printing input amount and width 17 afterwards then the number of ways the amount is made up of.

Solution Technique:
Instead of calculating the decimal and the fractional portion separately we can use one method to calculate the count. Since a Dollar can be made up of coins that is, $1 = 100 cents. So we can just calculate how many ways the coins can be made and that will be the answer.
`
For example,
$4.70      =      470 cents
$2.00      =      200 cents
$6.75      =      675 cents
$300.00  =  30000 cents
`

So we can put all the ways the coins can be divided to an array. Then use that calculate the count. Now whenever we can divide the amount with a specific coin we increase the count. We need calculate for all the specific coins.

Here I have given two codes, they are essentially the same. Only difference is in the second code instead of using an array to calculate the count, I have split the loop to show the calculations.

Complexity: O(n<sup>2</sup>).
