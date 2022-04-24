#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	float bs;
	cin>>t;
	while(t--){
		cin>>bs;
	if(bs<1500)
		cout<<fixed<<setprecision(2)<<bs+(0.1*bs)+(0.9*bs)<<endl;
	else
		cout<<fixed<<setprecision(2)<<bs+500+0.98*bs<<endl;}
}
