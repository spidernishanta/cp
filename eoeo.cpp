#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	long long ts, js;
	cin>>t;
	while(t--)
	{
		cin>>ts;
		if(ts%2!=0 && js%2!=0)
			cout<<"0";
		else if(js%2==0 && ts%2==0)
			t++;
		else if(js%2==0 && ts%2!=0)
			cout<<js;
		else
			cout<<ts;
	}
}
