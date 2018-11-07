# 10130 - Supersale

From this problem, im using the KnapSack method for the supersale problem.<br>
In this problem, we'll find  the maximum values from the objects in which a person can acquire,<br>
and also finding corresponding to the maximum possible amount of weight the person can carry from the given objects.

The Knapsack function can be understood with three conditions.<br>
1. fill the arrays with '0' if either the item value or weight iterated is zero.<br> 
2. Comparing and checking if the weight of the referenced item is lesser than the iterated weight from the loop .<br>
If so, then array 'K' will hold the maximum value between the comparison of either the current value + best value of the item,<br>
and the element of K with the previous index iteration of item.<br> 
3. If all function fails, the third function will occur and will rendering the current 'K' element to have the same value as 'K' element with the previous item iteration.

The value to be returned would be the best possible value at the best possible weight corresponding the the person's maximum weight he/she can carry.

Complexity would be O(item x weight) iterated.
