# 148A - Insomnia Cure

The problem of Insomnia Cure is to find the total of damaged dragons, and the damage divided by 4 types, from 1-4 is the input for the
damaged dragon and the 5th input will be the total dragons, in the first case, if there's 1 in any of the four input, it means that
all the dragon are damaged, because every number can be divided by 1, so im using if condition if there's 1 in any of the four input,
i initialize the damaged dragons same as the total dragons, and for the next using for loop to check how many number that will divisible 
from 1 to total dragons inputted, if it divisible then i'll make a counter and the counter will plus 1 everytime the number are divisible,
and for the last just output the counter.

Best Case : Ω(n)

Average Case : θ(n)

Worst Case : O(n)

# 469A - I Wanna Be The Guy

I'm using vector for this problem, it's simple for the first just input the levels,
then set the vector **set<int> mylevel** after that just loop to input the indices of levels, 
and insert it to mylevel, then im using if condition that if the mylevel size equals the levels, it will output
**"I becmoe the guy."** else it will output **"Oh, my keyboard!"**
  
Best Case : Ω(n^2)

Average Case : θ(n^2)

Worst Case : O(n^2)
 

