#include<iostream>
#include<cstdio>
#include<iomanip>
#include<cmath>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#include<list>
#include<cstring>
#include<stack>
#include<queue>
#include<sstream>
using namespace std;
#define ll long long
#define vi vector<int>
#define vii vector<vi >
#define pp pair<int,int>
#define pb push_back
#define mp make_pair
#define ppl pair<ll,ll>
#define vl vector<ll>
#define vll vector<vl >
#define vb vector<bool>
#define llu unsigned ll
#define all(c) c.begin(),c.end()
#define mod 1000000007
#define lt 31623
#define sf scanf
#define pf printf
ll power(ll a,ll b)
{
 if(!b)
  return 1;
 if(b==1)
  return a;
 ll temp=power(a,b/2);
 temp=(temp*temp);
 if(b&1)
  temp=(temp*a);
 return temp;
}
vi v(101);

bool comp(const pp& a, const pp& b)
{
    if( v[a.first] ^ v[b.first] )
        return v[a.first] > v[b.first];
    return a.second < b.second;
}

int main()
{
// ios_base::sync_with_stdio(false);
 int i, n, ind, p, t, q, u, val;
// cin >> n;
 sf("%d",&n);
 for( i=1;i<=n;i++ )
    sf("%d",&(v[i]));
 //cin >> t;
 sf("%d",&t);
 vb flag(n+1);
 while( t--)
 {
     //cin >> q >> u;
     sf("%d%d",&q,&u);
     vector< pp > order;
     i=0;
     while( q--)
     {
         //cin >> val;
         sf("%d",&val);
         if( !flag[val])
         {
             flag[val]=true;
             order.pb( mp(val,i++));
         }
     }
     for( i=0;i<u;i++ )
     {
         //cin >> ind >> p;
         sf("%d%d",&ind,&p);
         v[ind]=p;
     }
     sort( order.begin(), order.end(), comp);
     for( i=0;i<order.size()-1;i++ )
     {
        // cout << order[i].first << " ";
        pf("%d ",order[i].first);
         flag[order[i].first]=false;
     }
     //cout << order[i].first;
     pf("%d",order[i].first);
     flag[order[i].first]=false;
     pf("\n");
        //cout << "\n";
 }
 return 0;
}
