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
# Roy and Trending Topics
The problem is about Roy is trying to develop a widget that shows Trending topics on the home page,
he gathered N topics (their IDs) and the popularity (z-score) from the database.<br>
The z-score change everyday according to the following rules:<br>

1.When a topic is mentioned in a 'Post', its z-score is increased by 50.<br>
2.A 'Like' on such a Post, increases the z-score by 5.<br>
3.A 'Comment' increases z-score by 10.<br>
4.A 'Share' causes an increment of 20.<br>

The first input will be N lines follow, and each contains 6 separated numbers that conists of
Topic ID, current z-score - Posts - P, Likes - L, Comments - C, Shares - S.

The Output will be printing 5 topics each in a new line, and each line should contain
two space separated integers, the Topic ID and the new z-score of topic.

Complexity : O (nlogn)
