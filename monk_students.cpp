#include <bits/stdc++.h>
#define ll long long int
#define fastIO ios::sync_with_stdio(false);cin.tie(0)
#define sii(x) scanf("%d",&x)
#define pii(x) printf("%d\n",x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld\n",x)
#define pf printf
#define present_set_map(container, element) (container.find(element) != container.end())
#define present_vec(container, element) (find(all(container),element) != container.end())
#define mp make_pair
#define all(x) x.begin(),x.end()
#define all_rev(x) x.rbegin(),x.rend()
#define pb push_back
#define fr first
#define se second
#define mod 1000000007
using namespace std;

vector<ll>v;
map<ll,ll>mymap;

int main()
{
    fastIO;
    ll n,q,x1,x2,y1,y2,t1,t2,t3,g,val;
    ll i,j,k;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x1>>y1>>x2>>y2;
        g=__gcd(abs(x1-x2),abs(y1-y2));
        g++;
        v.pb(g);
        if(!mymap[g])
            mymap[g]=i+1;
    }
    sort(all(v));
    cin>>q;
    ll index;
    while(q--)
    {
        cin>>val;
        index=lower_bound(v.begin(),v.end(),val)-v.begin();
        if(index==n)
            cout<<"-1\n";
        else
            cout<<mymap[v[index]]<<"\n";
    }
    return 0;
}
