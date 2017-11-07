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
    int n;
    si(n);
    ll k;
    sll(k);
    int a[n];
    ll sum[n+1];
    sum[0]=0;
    iter(i,0,n)
    {
        si(a[i]);
        sum[i+1]=sum[i]+a[i];
    }
    int low=0,high=n+1,ans=0;
    while(low<high)
    {
        int mid=(low+high)/2;
        ll maxv=0;
        for(int i=0;i+mid<=n;i++)
        {
            ll sm=sum[i+mid]-sum[i];
            if(sm>maxv)
                maxv=sm;
        }
        if(maxv<=k)
        {
            low=mid+1;
            //ans=mid;
        }
        else
            high=mid;
    }
    pi(low-1);
    return 0;
}
