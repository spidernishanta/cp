#include<bits/stdc++.h>
using namespace std;
main()
{
	int a, b, c;
	cin>>a>>b>>c;
	if((a+c)>b && (b+c)>a && (a+b)>c)
	{
		if(a==b && b==c)
			cout<<1;
		else if(a==b || b==c || c==a)
			cout<<2;
		else if(a!=b!=c)
			cout<<3;
		else
			cout<<-1;
	}
	else
		cout<<-1;
}
