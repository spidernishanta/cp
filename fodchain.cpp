#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t, k, r, count=1;
	cin>>t;
	while(t--){
		cin>>r>>k;
		if(r>=0){
		r=floor(r/k);
		count++;
		}
		cout<<count<<"\n";
	}
	return 0;
}
