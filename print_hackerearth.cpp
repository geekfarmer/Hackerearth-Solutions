#include<iostream>
#include<string.h>
using namespace std;
int main()
{
 int n,i,count=0;
 int h=0,a=0,c=0,k=0,e=0,r=0,t=0;
 cin>>n;
 char c1[1000000];
 for(i=0;i<n;i++)
 {
  cin>>c1[i];                             //h a c k e r e a r t h
  if(c1[i]=='h')
   h++;
   else if(c1[i]=='a')
   a++;
   else if(c1[i]=='c')
   c++;
   else if(c1[i]=='k')
   k++;
   else if(c1[i]=='e')
   e++;
   else if(c1[i]=='r')
   r++;
   else if(c1[i]=='t')
   t++;
 }

 while(h>=2&&a>=2&&c>=1&&k>=1&&e>=2&&r>=2&&t>=1)
 {
  h=h-2;
  a=a-2;
  c--;
  k--;
  e=e-2;
  r=r-2;
  t--;
  count++;
 }
 cout<<count;
}
