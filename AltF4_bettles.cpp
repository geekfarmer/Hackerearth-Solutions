#include <bits/stdc++.h>
using namespace std;

int main()
{
 long long n,t,q;
 cin>>t;
 while(t--)
 {
     long long z=0;
     long long aa,bb,cc;
 cin>>n>>aa>>bb>>cc;
 long long a[n],b[n];
 for(long long i=0;i<n;i++)
 {
  long long x;
  cin>>a[i]>>x;
  b[i]=x;
 }
 sort(a,a+n);
 sort(b,b+n);
 //long long su=0,ma=0;
 long long i=0,j=0,cnt=0,ma=0,e=n,d=0;
 while(i<n)
 {
  if(a[i]<=b[j])
  {
   i++;
   cnt++;
   e--;
  }
  else
  {
   j++;
   cnt--;
   d++;
  }
  ma=max(ma,cnt*bb+d*cc+aa*e);
 }

 cout<<ma<<endl;
 }
    //cout << "Hello World!" << endl;
    return 0;
}
