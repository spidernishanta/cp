#include<iostream>
#include<cmath>

using namespace std;

#define ll long long int
const ll mod = 1e9 + 7;

ll Pow(ll a,ll b)
{
    if(b==0)
    return 1;
    
    else if(b%2==0)
    {
        ll y = Pow(a,b/2)%mod;
        return (y*y)%mod;
    }
    else
    return (a*Pow(a,b-1))%mod;
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
       ll n,m;
       cin>>n>>m;
       ll c = Pow(2,n)%mod;
       c--;
       ll ans = Pow(c,m)%mod;
       cout<<ans<<"\n";
    }
    return 0;
}
