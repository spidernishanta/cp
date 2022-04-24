#include<bits/stdc++.h>
using namespace std;
main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n=1000000000;
	long long int sum=0;
	for(int i=1; i<=n; i++)
		sum+=i;
	cout<<sum;
}
