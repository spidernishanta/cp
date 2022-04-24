//sorting in descending order
#include<bits/stdc++.h>
using namespace std;
main()
{
	int a[]={1, 6, 8, 6, 20, 65, 57, 35, 28, 9, 14};
	int size=sizeof(a)/sizeof(a[0]);
	sort(a, a+size, greater<int>());
	for(int i=0; i<size; i++)
		cout<<a[i]<<" ";
}
