#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t, a, b;
	cin>>t;
	while(t--){
		cin>>a>>b;
		if((a+b)<3)
			cout<<"1\n";
		else if((a+b)>=3 and (a+b)<=10)
			cout<<"2\n";
		else if((a+b)>=11 and (a+b)<=60)
			cout<<"3\n";
		else
			cout<<"4\n";
	}
	return 0;
}
