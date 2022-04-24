#include<bits/stdc++.h>
using namespace std;
main()
{
	int t, n, r;
	cin>>t;
	long a[t], sum[t]={0};
		for(int i=0; i<t; i++)
			cin>>a[i];
		for(int i=0; i<t; i++)
		{
			while(a[i]>0)
			{
				sum[i]=sum[i]*10+(a[i]%10);
				a[i]/=10;
			}
			cout<<sum[i]<<"\n";
		}
}
