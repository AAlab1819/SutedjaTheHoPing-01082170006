#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin>>n;

   int x,y;

   set<int> mylevel;

   for (int i=0; i<2; i++)
   {
       cin>>x;
       {
           for (int j=0; j<x; j++)
           {
               cin>>y;
               mylevel.insert(y);
           }
       }
   }
   if (mylevel.size()==n)
   {
       cout<<"I become the guy."<<endl;
   }
   else{
    cout<<"Oh, my keyboard!"<<endl;
   }
return 0;

}
