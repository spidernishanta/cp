#include <iostream>
using namespace std;

int main() {
	// your code goes here
	string s1;
	cin>>s1;
	int h[26]={0};
	for(int i=0;i<s1.size();i++)
	{
	    h[s1[i]-'a']=1;
	}
	int n;
	cin>>n;
	while(n--)
	{
	    string s2;
	    cin>>s2;
	    int flag=1;
	    for(int i=0;i<s2.size();i++)
	    {
	        if(h[s2[i]-'a']==0)
	        {
	            flag=0;
	            break;
	        }
	    }
	    if(flag==0)
	        cout<<"No"<<endl;
	    else
	        cout<<"Yes"<<endl;
	}
	
	return 0;
}

