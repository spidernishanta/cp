#include<bits/stdc++.h>
using namespace std;
main()
{
	int n, get, i=1;
	cin>>n;
	while(i<=10)
	{
		if(n%i==0)
			get=i;
		i++;
	}
	cout<<get;
}
