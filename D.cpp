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
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x;
        cin>>n>>x;
        vll vec;
        //vector<pll> ara;
        //memset(ara,0,sizeof(ara));
        for(ll i=0;i<n;i++)
        {
            ll num;
            cin>>num;
            ll p=num%x;
            if(p==0)
                continue;
            else
            {
                vec.pb(x-p);
               // ara[x-p]++;
            }
        }
        if(vec.empty())
        {
            cout<<0<<endl;
            continue;
        }
        sort(vec.begin(),vec.end());
        ll w=0,res=0;
        for(ll i=0;i<vec.size();i++)
        {
            ll j,cnt=0;
            for(j=i;j<vec.size();j++)
            {
                if(vec[i]!=vec[j])
                {
                    break;
                }
                cnt++;
            }
            i=j-1;
            w=max(cnt,w);
            if(w==cnt)
                res=vec[i];
        }
        ll mx=x*(w-1)+res;
        if(mx>0)
            mx++;
        cout<<mx<<endl;

    }

}
