#include <bits/stdc++.h>
#include <iostream>
using namespace std;
typedef unsigned long long ll;
int main()
{
    ll s;//total stones
    ll n;//cost of stones
    ll m; //kuriyama mirai's questions
    ll total = 0;
    ll type, l, r; //question
    cin>>s;
    ll StonesSortedArr[s];
    ll stoneCost[s] = {0};
    ll stoneCostSorted [s] = {0};

    for (int i=0; i<s; i++)
    {
        cin>>n;
        total+=n;
        stoneCost[i] = total;
        StonesSortedArr[i] = n;
    }
    sort(StonesSortedArr, StonesSortedArr+s);
    total = 0;

    for(int i=0; i<s; i++)
    {
        total+=StonesSortedArr[i];
        stoneCostSorted[i] = total;
    }
    cin>>m;

    for(int i=0; i<m; i++)
    {
        cin>>type;
        if (type == 2)
        {
            cin>>l;
            cin>>r;
            if (l-2 == -1)
            {
                cout<<stoneCostSorted[r-1]<<endl;
            }
            else{
                cout<<stoneCostSorted[r-1] - stoneCostSorted[l-2]<<endl;
            }
        }
        else{
            cin>>l;
            cin>>r;
            if (l-2 == -1)
            {
                cout<<stoneCost[r-1]<<endl;
            }
            else{
                cout<<stoneCost[r-1] - stoneCost[l-2]<<endl;
            }
        }
    }
    return 0;
}
