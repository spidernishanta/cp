#include<bits/stdc++.h>
using namespace std;
main()
{
	int x, y, z, d, t;
	cin>>t;
	while(t--)
	{
		cin>>d>>x>>y>>z;
		int f=7*x;
		int f1=y*d+(7-d)*z;
		int m=max(f, f1);
		cout<<m<<"\n";
	}
}
