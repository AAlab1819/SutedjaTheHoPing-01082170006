#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	int counter =1;
	cin>>n;
	int arr[n];
	for(int i= 0 ; i<n;i++)
	{
		cin>>arr[i];
	}
	for (int i=0; i<n; i++)
	{
		if (arr[i]%2==1)
		{
			if (arr[i+1]==0 || i==n-1)
			{
				counter = 2;
				break;;
			}
			arr[i+1]--;
		}
	}
	if (counter==1)
    {
        cout<<"YES";
    }
	else{
        cout<<"NO";
	}
	return 0;
}
