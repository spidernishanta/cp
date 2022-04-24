#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char str[1000], s1[1000], s2[1000];
		int mid, ss2;
		cin>>str;
		int len=strlen(str);
		mid=len/2;
		if(len%2!=0){		//if odd length solution approved
		for(int i=0; i<mid; i++)	//copy logic for s1
			s1[i]=str[i];
		for(int i=mid+1; i<strlen(str); i++)	//copy logic for s2
			s2[i]=str[i];
		for(int i=0; i<mid; i++)	//print s1
			cout<<s1[i];
		cout<<"\n";
		for(int i=mid+1; i<strlen(str); i++) //print s2
			cout<<s2[i];
		}
		else{
		for(int i=0; i<mid; i++)	//copy logic for s1
			s1[i]=str[i];
		for(int i=mid; i<strlen(str); i++)	//copy logic for s2
			s2[i]=str[i];
		for(int i=0; i<mid; i++)	//print s1
			cout<<s1[i];
		cout<<"\n";
		for(int i=mid; i<strlen(str); i++) //print s2
			cout<<s2[i];
		}

	}
}
