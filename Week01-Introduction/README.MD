The problem of division
912A-Tricky Alchemy
=====
The Problem of Tricky Alchemy are, how many Grisha needs the colour crystal which is have 2 colours, yellow and blue to make crystals for the amount of colour balls as he wants.<br />
Then we just have to make the calculations like this:<br />
1.So from the questions given:<br />
"**It's known that to produce a yellow ball one needs two yellow crystals, green — one yellow and one blue, and for a blue ball, three blue crystals are enough.**<br />
`if (cy<(2*y+g))<br />
     a+=((2*y+g)-cy);`<br />
so if the amount of cy (Crystal Yellow) is less than 2 Yellow + green(this is because 1 Yellow ball needs 2 crystal and 1 Green ball needs 1 yellow crystal, then i save the amount in **a** and the total of 2 Yellow Ball + 1 Green Ball subtract by the Crystal Yellow and added with the **a**.<br />
then for the second code is<br />
` if (cb<(g+3*b))<br />
      a+=((g+3*b)-cb);`<br />
this code was made for the blue crystal.
both of the codes are made in purpose so that if the crystal are needed to add.<br />
then after the code done, simply print out the "**a**".<br />
[Submission Link](http://codeforces.com/contest/912/submission/42420830) | [Problem Link](http://codeforces.com/contest/912/problem/A)<br />
854A-Fraction
====
    

