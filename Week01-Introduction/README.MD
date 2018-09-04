### 912A-Tricky Alchemy

The Problem of Tricky Alchemy are, how many Grisha needs the colour crystal which is have 2 colours, yellow and blue to make crystals for the amount of colour balls as he wants.
Then we just have to make the calculations like this:

So from the questions given:
"**It's known that to produce a yellow ball one needs two yellow crystals, green — one yellow and one blue, and for a blue ball, three blue crystals are enough.**
`if (cy<(2*y+g))
     a+=((2*y+g)-cy);`
     
so if the amount of cy (Crystal Yellow) is less than 2 Yellow + green(this is because 1 Yellow ball needs 2 crystal and 1 Green ball needs 1 yellow crystal, then i save the amount in **a** and the total of 2 Yellow Ball + 1 Green Ball subtract by the Crystal Yellow and added with the **a**.
then for the second code is

` if (cb<(g+3*b))
      a+=((g+3*b)-cb);`
      
this code was made for the blue crystal.
both of the codes are made in purpose so that if the crystal are needed to add.<br />
then after the code done, simply print out the "**a**".

[Submission Link](http://codeforces.com/contest/912/submission/42420830) | [Problem Link](http://codeforces.com/contest/912/problem/A)

### 854A-Division

The problem of Division is simple, so petya wants the fraction to be irreducible and it means that the division's numerator are less than denominator and both of the numerator and denominator are coprime (they do not have positive common divisors except 1).
First We input the number that we wants, if it's even then the number will be divided by 2 and subtract by 1, and it'll inserted to the numerator, and for the denominator will be inserted with the number that divided by 2, and will be added by 1.

But, some of the number for example "**34**", the output will be "**16 18**", so for the handling error to make the numerator and denominator irreducible, we apply one more code as follows:

`if(numerator%2==0 && denominator%2==0)//kalau di genap masih reducible
    numerator--;
    denominator++;`
    
For the odd number, it is more simple than the even number, you just have to divide the number by 2 for the numerator, and for the denominator you just insert the number subtract by the numerator.
In the end, for the output, you just print the numerator and denominator.
[Submission Link](http://codeforces.com/contest/854/submission/42424110) | [Problem Link](http://codeforces.com/contest/854/problem/A)

### 988A-Diverse Team
From the problem that I solved, it's quite complex, that we have to use "**map**" library.
For the first line of input, it is included the number of the students, the size of the team(the team must consist of students with different rank) and the second line of input will be the rank of each students.
For the first line output, we print out "**YES**" or "**NO**" to tell us whether the student's rank that we input are less than or same with the size of team that we wants.

For the second line output, we print out the student's rank index.
For saving the index we save the index at the element of the maps using for loop.
Then, we use counter so that the index will be printed based on the size of the team using for loop.
Finally, we just print out using for loop, and the iteration im using pointer because if we didn't use pointer it will printout only the address.

[Submission Link](http://codeforces.com/contest/988/submission/42427671) | [Problem Link](http://codeforces.com/contest/988/problem/A)



    

