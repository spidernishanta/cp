#include<bits/stdc++.h>
using namespace std;
main()
{
	int t, n, k, d;
	cin>>t;
	while(t--)
	{
		cin>>n>>k>>d;
		int a[n], sum=0;
		for(int i=0; i<n; i++)
		{
			cin>>a[i];
			sum+=a[i];
		}
		sum/=k;
		if(sum>d)
			cout<<d<<endl;
		else
			cout<<sum<<endl;
	}
}
		
