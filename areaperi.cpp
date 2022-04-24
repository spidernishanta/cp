#include<bits/stdc++.h>
using namespace std;
main()
{
	int l, b;
	cin>>l;
	cin>>b;
	if(l*b> 2*(l+b))
		cout<<"Area\n"<<l*b;
	else if(l*b< 2*(l+b))
		cout<<"Peri\n"<<2*(l+b);
	else
		cout<<"Eq\n"<<l*b;
}
