#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, numb;
	int total=0 ,negTol=0;
	cin>>n;
	for(int i= 0 ; i<n ;i++)
	{
		cin>>numb;
		if(numb>0)
		{
			total+=numb;
		}
		else
		{
			negTol+=numb;
		}
	}
	cout<<total - negTol<<endl;
	return 0;
}
