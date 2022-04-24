#include<bits/stdc++.h>
using namespace std;
main()
{
	int t, n, m;
	cin>>t;
	while(t--)
	{
		long long int count=0;
		cin>>n>>m;
		for(int i=0; i<pow(2,m)-1; i++)
		{
			for(int j=i+1; j<pow(2,m)-1; j++)
			{
				if(i&j==0)
					count++;
			}
		}
		cout<<count<<endl;
	}
}
