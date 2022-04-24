#include<bits/stdc++.h>
using namespace std;
main()
{
	int n, k, count=0;
	cin>>n>>k;
	long long int a[n];
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		if(a[i]%k==0)
			count++;
	}
	cout<<count;
}

