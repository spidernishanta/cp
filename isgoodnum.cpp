#include<bits/stdc++.h>
using namespace std;
main()
{
	int n, sum=0;
	cin>>n;
	for(int i=n/2; i>=1; i--)
	{
		if(n%i==0)
			sum+=i;
	}
	if(sum==n)
		cout<<"YES";
	else
		cout<<"NO";
}
