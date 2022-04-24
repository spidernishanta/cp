#include<bits/stdc++.h>
#define ll long long int
using namespace std;
main()
{
	int t;
	cin>>t;
	ll a[10], k, sum=0;
	while(t--)
	{
		for(int i=0; i<10; i++)
			cin>>a[i];
		cin>>k;
		for(int i=9; i>=0; i--)
		{
			sum+=a[i];
			if(sum>k)
			{
				cout<<i+1<<"\n";
				break;
			}
		}
	}
}
