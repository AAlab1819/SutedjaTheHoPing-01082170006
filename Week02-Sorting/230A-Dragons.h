#include <iostream>

using namespace std;

struct dragon
{
    int x;
    int y;
};


void shellSort(struct dragon arr[], int n)
{
    for (int gap=n/2; gap>0; gap=gap/2)
    {
        for (int i=gap; i<n; i++)
        {
            for (int j=i-gap; j>=0; j=j-gap)
            {
                if (arr[j+gap].x<=arr[j].x)
                {
                    dragon temp = arr[j];
                    arr[j] = arr[j+gap];
                    arr[j+gap] = temp;
                }
            }
        }
    }
}


int main()
{
	//s=kirito strength, n=numb of dragons, x=dragon's strength, y=bonus point
    int s, n;

    cin>>s;
    cin>>n;

    dragon dragonChar[n];

    for (int i=0; i<n; i++)
    {
        cin>>dragonChar[i].x;
        cin>>dragonChar[i].y;
    }

    shellSort(dragonChar, n);

    int counter = 0;
    do
    {
        if (s - dragonChar[counter].x > 0)
        {
            s=s+(dragonChar[counter].y);
        }
        else
        {
            cout<<"NO"<<endl;
            return 0;
        }
        counter++;
    }while (counter<n);

    cout<<"YES"<<endl;

    return 0;
}
