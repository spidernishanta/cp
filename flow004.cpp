#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t, n, r, sum=0;
	cin>>t;
	while(t--){
		cin>>n;
	r=n%10;
	sum=r;
	do{
		r=n%10;
		n/=10;
	}while(n>0);
	sum+=r;
	cout<<sum<<"\n";
	}
	return 0;
}
