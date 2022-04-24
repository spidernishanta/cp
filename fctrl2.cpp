#include<bits/stdc++.h>
using namespace std;
main()
{
	int t, n;
	cin>>t;
	while(t--)
	{
		long long int fact=1;
		cin>>n;
		while(n)
		{
			fact*=n;
			n--;
		}
		cout<<fact<<endl;
	}
}
