#include<bits/stdc++.h>
using namespace std;
main()
{
	int with_amt;
	float tot_amt, remain_amt, charges=0.50;
	cin>>with_amt>>tot_amt;
	if(with_amt%5==0 && tot_amt>=with_amt+charges)
	{
		remain_amt=tot_amt-with_amt-charges;
		cout<<fixed<<setprecision(2)<<remain_amt;
	}
	else
		cout<<fixed<<setprecision(2)<<tot_amt;
}
