#include<bits/stdc++.h>
using namespace std;
int print(int n)
{
	if(n==0)
		exit(0);
	cout<<n<<" ";
	return print(n-1);


}
main()
{
	int n;
	cin>>n;
	print(n);
}
	
