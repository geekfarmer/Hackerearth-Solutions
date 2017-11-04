#include<bits/stdc++.h>
typedef long long int lli;
using namespace std;
lli arr[12];
int main()
{
  int n,t;
  cin>>n>>t;
  for(int i=0;i<n;i++)
  {
   cin>>arr[i];
  }
  int maxi=(1<<n);
  while(t--)
  {
     lli l,r;
     cin>>l>>r;
     lli ans=0;
     for(int i=1;i<maxi;i++)
       {
        int bc=0;
        lli gc=1;
        for(int j=0;j<n;j++)
          {
           if(i &(1<<j))
               {
                  bc+=1;
              gc=(1ll*gc*arr[j])/(__gcd(gc,arr[j]));
     }
     }
     //cout<<"bc "<<bc<<endl;
   lli cov=r/gc-((l-1)/gc);
   if(bc%2==1) ans+=cov;
   else ans-=cov;
   }
   cout<<ans<<endl;

  }
}
