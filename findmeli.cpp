#include<bits/stdc++.h>
using namespace std;
int find(int a[], int n, int k)
{
	for(int i=0; i<n; i++)
	{
		if(a[i]==k)
			return 1;
	}
	return -1;
}
int main()
{
	int a[100000], n, k;
	cin>>n>>k;
	for(int i=0; i<n; i++)
		cin>>a[i];
	cout<<find(a, n, k);
}
