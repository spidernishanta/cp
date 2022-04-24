#include<bits/stdc++.h>
using namespace std;
main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t, a, b, c, d;
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>c>>d;
		if(a+c==180 and b+d==180)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
}
