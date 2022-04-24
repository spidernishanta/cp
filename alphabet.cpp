#include<bits/stdc++.h>
using namespace std;
main()
{
	string a;
	int n;
	cin>>a;
	cin>>n;
	while(n--)
	{
		string s;
		int flag=0;
		cin>>s;
		for(int i=0; i<a.size(); i++)
		{
			if(s[0]==a[i])
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;
	}

}

