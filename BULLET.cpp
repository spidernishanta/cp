#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--){
		int x, y, z;
		cin>>x>>y>>z;
		if(z-(y/x)<0)
			cout<<0<<"\n";
		else
			cout<<z-(y/x)<<"\n";
	}
}
