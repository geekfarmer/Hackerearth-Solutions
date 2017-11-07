#include<bits/stdc++.h>
#define ll long long
#define maxe 2147483647
#define INF 1e16
#define si(x) scanf("%d",&x)
#define sc(x) scanf("%c",&x)
#define sl(x) scanf("%ld",&x)
#define sll(x) scanf("%lld",&x)
#define slf(x) scanf("%lf",&x)
#define ss(x) scanf("%s",x)
#define pi(x) printf("%d\n",x)
#define pl(x) printf("%ld\n",x)
#define pll(x) printf("%lld\n",x)
#define ps(x) printf("%s\n",x)
#define iter(i,a,b) for(int i=a; i<b; i++)
#define itern(i,a,b,n) for(int i=a; i<b; i+=n)
#define ited(i,a,b) for(int i=a;i>=b;i--)
#define mp make_pair
#define pb push_back
#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b
//#define pop pop_back
#define mod 1000000007
#define px pair<ll,ll>
using namespace std;
int main()
{
    int n,q;
    si(n);si(q);
    vector < px > vec;
    ll dis[n+1];
    dis[0]=0;
    for(int i=0;i<n;i++)
    {
        ll x,y;
        sll(x);sll(y);
        vec.pb(mp(x,y));
        dis[i+1]=dis[i]+(y-x+1);
    }
    while(q--)
    {
        ll r;
        sll(r);
        int lb=lower_bound(dis,dis+n+1,r)-dis;
        //pi(lb);
        ll v=r-dis[lb-1];
        ll ans=vec[lb-1].first+v-1;
        pll(ans);
    }
}
