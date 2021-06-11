#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define ull  unsigned long long
#define vll  vector <long long>
#define pll pair <long long,long long>
#define f first
#define s second
#define up upper_bound
#define lp lower_bound
#define pq priority_queue
#define inf 1e10
#define minf -1e10
#define pi 3.14159265
#define mod 300000000000000000
#define fastio ios_base::sync_with_stdio(0);cin.tie(NULL);
ll gcd(ll n,ll m)
{
    ll x,y;
    if(n>m)
    {
        y=n;
        x=m;
    }
    else
    {
        y=m;
        x=n;
    }
    if(y%x==0)
        return x;
    else
    {
        return gcd(x,y%x);
    }
}
int main()
{
    ll n,k,p=0,q=0;
    cin>>n>>k;
    vll a,b,u;
    for(ll i=0;i<n;i++)
    {
        ll x,y,z;
        cin>>x>>y>>z;
        if(y&z)u.pb(x);
        else if(y)a.pb(x);
        else if(z)b.pb(x);
    }
    sort(b.begin(),b.end());
    sort(a.begin(),a.end());
    for(ll i=0;i<min(a.size(),b.size());i++)
    {
        u.pb(a[i]+b[i]);
    }
    sort(u.begin(),u.end());
    if(u.size()<k)
        cout<<-1<<endl;
    else
    {
        ll ans=0;
        for(ll i=0;i<k;i++)
        {
            ans+=u[i];
        }
        cout<<ans<<endl;
    }

}
