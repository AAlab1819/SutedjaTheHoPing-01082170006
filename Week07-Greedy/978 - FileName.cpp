#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	int counter=0;
	int result=0;
	string FileName;
	cin>>n;
	for(int i= 0 ; i<n;i++)
	{
		cin>>FileName;
		if(FileName[i]=='x')
		{
			counter++;
			if(counter>2)
			{
				result++;
			}
		}
		else
		{
			counter=0;
		}
	}
	cout<<result<<endl;
	return 0;
}
