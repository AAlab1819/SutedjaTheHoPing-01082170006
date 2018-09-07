#include <iostream>
using namespace std;
int shellSort(int arr[], int n)
{
    for (int gap = n/2; gap>0; gap/=2)
        for (int i=gap; i<n; i++)
            for(int j=i-gap; j>=0; j-=gap)
            {
                if (arr[j] > arr [j+gap])
                    swap(arr[j], arr[j+gap]);
            }

}

int main()
{
    int x;
    cin>>x;
    int arr[x];


    int smallestAmount=0;
    int largestAmount=0;
    for(int i=0; i<x; i++)
    {
        int temp;
        cin>>temp;
    }
    shellSort (arr, x);
    for(int i=0; i<x; i++)
    {
        if(arr[i] == arr[0])
        {
            smallestAmount++;
        }else{
        break;
        }
    }
    for(int i=x-1; i>=0; i--)
    {
        if (arr[i] == arr[x-1])
        {
            largestAmount++;
        }
        else{
            break;
        }
    }
    cout << x-(smallestAmount+largestAmount);
    return 0;
}

