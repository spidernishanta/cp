#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	int a[t], b[t];
	for(int i=0; i<t; i++)
		cin>>a[i]>>b[i];
	for(int i=0; i<t; i++)
		cout<<a[i]+b[i]<<endl;
}
