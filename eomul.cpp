#include<bits/stdc++.h>
using namespace std;
main()
{
	int n;
	cin>>n;
	if(n%3!=0)
		cout<<"-1";
	else if(n%3==0)
	{
		int q=n/3;
		if(q%2==0)
			cout<<"0";
		else
			cout<<"1";
	}
}

