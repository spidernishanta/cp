#include<bits/stdc++.h>
#define ll long long int
using namespace std;
main()
{
	int t, n, a, b, i;
	cin>>t;
	while(t--)
	{
		cin>>n;
		vector<pair<ll, ll>> x;
		vector<pair<ll, ll>> y;
		multiset<ll> X;
		multiset<ll> Y;
		for(i=0; i<n; i++)
			cin>>a>>b;
		x.push_back({a, b});
		y.push_back({b, a});
		X.insert(a);
		Y.insert(b);
		sort(x.begin(), x.end());
		sort(y.begin(), y.end());
		ll maxh1=0;
		ll minh1=LONG_MAX;
		ll heighth1=0;
		ll heighth2=0;
		ll area=LONG_MAX;
		for(i=0; i<n-1; i++)
		{
			maxh1=max(maxh1, x[i].second);
			minh1=min(minh1, x[i].second);
			heighth1=maxh1-minh1;
			auto it=Y.find(x[i].second);
			Y.erase(it);
			heighth2=*(Y.begin())-*(Y.begin());
			ll newArea=(x[i].first - x[0].first)*heighth1+(x[n-1]-x[i+1])*heighth2;
			area=min(area, newArea);
		}
		if(area==LONG_MAX)
			area=0;
		cout<<area<<endl;
	}
}
