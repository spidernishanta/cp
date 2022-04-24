#include<bits/stdc++.h>
using namespace std;
main()
{
	int t, a, b;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		if(a<b)
			cout<<"<"<<endl;
		else if(a>b)
			cout<<">"<<endl;
		else
			cout<<"="<<endl;
	}
}
