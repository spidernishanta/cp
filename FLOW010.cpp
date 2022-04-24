#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--){
		char id;
		cin>>id;
		if(id=='B' || id=='b')
			cout<<"BattleShip\n";
		else if(id=='C' || id=='c')
            cout<<"Cruiser\n";
		else if(id=='D' || id=='d')
            cout<<"Destroyer\n";
        else if(id=='F' || id=='f')
            cout<<"Frigate\n";
	}
	return 0;
}
