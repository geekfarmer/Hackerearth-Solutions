#include<bits/stdc++.h>
using namespace std;

int main(){

  int i,t,q,y=0,f=0;
  long long x,sum=0;
  cin>>t;
  char a[6];
  long long m[t];
  for(i=0;i<t;i++)
    cin>>m[i];
    cin>>q>>x;
    stack <long long> s;

    for(i=0;i<q;i++)
    {
        cin>>a;


        if(strcmp(a,"Harry")==0 && f==0){s.push(m[y]);
                       sum=sum+m[y];
                       y++;
                       if(sum==x)f=1;
                      }
        if(strcmp(a,"Remove")==0 && f==0){ sum=sum-s.top();
                        s.pop();

            if(sum==x)f=1;}

    }

    if(f==1)cout<<s.size()<<"\n";
     else cout<<"-1\n";
   return 0;

}
