#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int k,coins;
	    cin>>coins>>k;
	    int doge = 0; // lol
	    for(int p=1;p<=k;p++){
	        int temp = coins % p;
	        if(temp > doge){
	            doge = temp;
	        }
	    }
	    cout<<doge<<endl;
	}
	return 0;
}

