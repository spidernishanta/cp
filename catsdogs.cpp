#include<bits/stdc++.h>
using namespace std;
main()
{
	int c, d, l, t;
	cin>>t;
	while(t--){
	cin>>c>>d>>l;
	int max=(c+d)*4;
	if(l<=max and l%4==0)
		cout<<"yes"<<endl;

