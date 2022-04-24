#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		if(s.find("010")<=s.length() || s.find("101")<=s.length())
			cout<<"Good"<<endl;
		else
			cout<<"Bad"<<endl;
	}
}
