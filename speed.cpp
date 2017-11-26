#include<bits/stdc++.h>

using namespace std;

typedef unsigned long long int ll;
#define MAX 100000

int min(int x,int y)
{
 return x<y?x:y;
}

int main()
{
    ll T;
    ll N;
    ll a[MAX];
    ll cars;
    ll i;
    cin>>T;
    while(T--)
    {
     cars=1;
     cin>>N;
     for(i=0;i<N;i++)
     {
      cin>>a[i];
      if(i>0)
      {
       if(a[i]<a[i-1])
        cars++;
       a[i] = min(a[i],a[i-1]);
      }
     }
     cout<<cars<<endl;
    }
    return 0;
}
