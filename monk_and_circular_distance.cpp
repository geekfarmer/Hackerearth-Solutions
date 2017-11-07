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
using namespace std;
int main()
{
    int n;
    si(n);
    double dis[n];
    iter(i,0,n)
    {
        ll x,y;
        sll(x);sll(y);
        dis[i]=sqrt(x*x+y*y);
    }
    sort(dis,dis+n);
   /* iter(i,0,n)
        printf("%lf ",dis[i]);
    printf("\n");*/
    int q;
    si(q);
    while(q--)
    {
        ll r;
        sll(r);
        //int ub=upper_bound(dis,dis+n,r)-dis;
        int low=0,high=n;
        while(high>low)
        {
            int mid=(low+high)/2;
            if(dis[mid]<=r)
                low=mid+1;
            else
                high=mid;
        }
        /*(dis[high]<=r)
            pi(high+1);
        else if(dis[low]>r)
            printf("0\n");
        else
            pi(low+1);*/
        pi(low);
    }
    return 0;
}
