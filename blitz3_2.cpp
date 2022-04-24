#include<bits/stdc++.h>
using namespace std;
main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t, n, a, b;
	cin>>t;
	while(t--)
	{
		cin>>n>>a>>b;
		cout<<2*(180+n)-(a+b)<<"\n";
	}
}
