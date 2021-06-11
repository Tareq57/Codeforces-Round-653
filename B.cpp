//BISMILLAH
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
        ll n;
        cin>>n;
        if(n==1)
        {
            cout<<0<<endl;
            continue;
        }
        ll p=0,q=0;
        if(n%2==0)
        {
            while(n%2==0)
            {
                n/=2;
                p++;
            }
        }
        if(n%3==0)
        {
            while(n%3==0)
            {
                n/=3;
                q++;
            }
        }
        if(p>q||n>1)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<q+(q-p)<<endl;
        }
    }
}

