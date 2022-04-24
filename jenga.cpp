#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--){
		int n, x;
		cin>>n>>x;
		if(x%n==0)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	return 0;
}
