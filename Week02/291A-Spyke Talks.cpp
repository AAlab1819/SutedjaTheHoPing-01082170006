#include <iostream>

using namespace std;

int main()
{
    int n;
    int counter=0;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    //sorting
    for(int i=0; i<n; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            if(arr[i]>=arr[j])
            {
                int temp = arr[i];
                arr [i] = arr [j];
                arr[j] = temp;
            }
        }
    }
    //check ada yang sama
    for (int i=0; i<n; i++)
    {
        if(arr[i]==0)
        {
            continue;
        }
        if(arr[i]==arr[i+1])
        {
            counter++;
            if (arr[i+1] == arr[i+2])
        {
            cout<<"-1"<<endl;
            return 0;
        }

        }

    }
cout<<counter<<endl;

    return 0;
}
