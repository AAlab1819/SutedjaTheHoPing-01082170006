# Heaps : Finding the Running Median
The problem of "Finding the Running Median", is to find the median from the list that we input.<br>
For Example, we have {5,4,2,6}, we have to sort it and use heapsort, after the list sorted it'll be {2,4,5,6}.<br>
We get the median by adding the 2 middle number, 4+5/2 = 4.5.<br>
Explanation:
<pre>
Sample Input:
3
8
5
6<br>
Sample Output:
{8}, 
{5,8} the output will be 6.5, because 5+8/2
{5,6,8} the output will be 6 as the median of the list
</pre>
Complexity : O(nlogn)
