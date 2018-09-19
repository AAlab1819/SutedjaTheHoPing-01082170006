#include <iostream>

using namespace std;

void heapify(double arr[], int n, int i)
{
    int largest = i; // Initialize largest as root
    int l = 2*i + 1; // left = 2*i + 1
    int r = 2*i + 2; // right = 2*i + 2

    // If left child is larger than root
    if (l < n && arr[l] > arr[largest])
        largest = l;

    // If right child is larger than largest so far
    if (r < n && arr[r] > arr[largest])
        largest = r;

    // If largest is not root
    if (largest != i)
    {
        swap(arr[i], arr[largest]);

        // Recursively heapify the affected sub-tree
        heapify(arr, n, largest);
    }
}

// main function to do heap sort
void heapSort(double arr[], int n)
{
    // Build heap (rearrange array)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // One by one extract an element from heap
    for (int i=n-1; i>=0; i--)
    {
        // Move current root to end
        swap(arr[0], arr[i]);

        // call max heapify on the reduced heap
        heapify(arr, i, 0);
    }
}

int main()
{
    double temp=0;
    double l;
    int n;
    double d;
    cin>>n>>l;
    double arrayOfLanterns[n];
    for(int i=0; i<n; i++)
    {
    cin>>arrayOfLanterns[i];
    }
    heapSort(arrayOfLanterns, n);

    //to know the radius
    for(int i=0; i<n-1; i++)
    {
    d = (arrayOfLanterns[i+1] - arrayOfLanterns[i]);
    if (temp<d)
    {
        temp=d;
    }

    }
    cout.precision(10);
    cout<<max(max(arrayOfLanterns[0],temp/2),l-arrayOfLanterns[n-1]);

    return 0;
}
