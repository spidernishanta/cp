#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--){
		int a, b, c;
		cin>>a>>b>>c;
		if(((a+b+c)==180) && (a!=0 || b!=0 || c!=0))
			cout<<"YES\n";
		else
			cout<<"NO\n";

	}
	return 0;
}
