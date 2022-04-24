#include<bits/stdc++.h>
using namespace std;
main()
{
	int n, ec=0, oc=0;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++)
		cin>>a[i];
	for(int i=0; i<n; i++)
	{
		if(a[i]%2==0)
			ec++;
		else
			oc++;
	}
	if(ec>oc)
		cout<<"READY FOR BATTLE";
	else
		cout<<"NOT READY";
}
