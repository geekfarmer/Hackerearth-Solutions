#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;
map<ll,ll> facta,factb;
 ll a,b,c;
ll mod_pow(ll b, ll e) {
  ll ans = 1;
  while (e > 0) {
    if (e & 1)
      ans = (ans * b) % mod;
    b = (b * b) % mod;
    e >>= 1;
  }
  return ans;
}
void factorize(ll a,int b)
{
 if(b==0)
 {
        for(ll i=2;i*i<=a;i++)
        {
         if(a%i==0)
         {
          while(a%i==0)
          {
                      facta[i]++;
                      a/=i;
          }
         }
        }
        if(a>1)
        {
         facta[a]++;
        }
 }
 else
      {
       for(ll i=2;i*i<=a;i++)
        {
         if(a%i==0)
         {
          while(a%i==0)
          {
                      factb[i]++;
                      a/=i;
          }
          factb[i]*=c;
         }
        }
        if(a>1)
        {
         factb[a]++;
         factb[a]*=c;
        }
      }
}
int main()
{
   ll i,j,k,t,m;
   cin>>t;
   while(t--)
   {
    facta.clear();
    factb.clear();
    cin>>a>>b>>c;
    factorize(a,0);
    factorize(b,1);
    map<ll,ll> :: iterator it;
    for(it=factb.begin();it!=factb.end();it++)
    {
     if(facta[it->first])
     {
      if(it->second>=facta[it->first])
      factb[it->first]=it->second-facta[it->first];
         else
          factb[it->first]=0;

     }
    }
    ll sum=1;
    for(it=factb.begin();it!=factb.end();it++)
    {
     ll val=it->first%mod;
     ll up=it->second;
     if(up>0)
     {
      ll temp=mod_pow(val,up);
      sum*=temp;
      sum%=mod;
     }

    }
    cout<<sum<<endl;

   }
}
