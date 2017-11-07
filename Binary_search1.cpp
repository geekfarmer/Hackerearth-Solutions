#include<iostream>
using namespace std;

int binarySearch(int low,int high,int key)
{
   while(low<=high)
   {
     int mid=(low+high)/2;
     if(a[mid]<key)
     {
         low=mid+1;
     }
     else if(a[mid]>key)
     {
         high=mid-1;
     }
     else
     {
         return mid;
     }
   }
   return -1;                //key not found
 }

 int main()
 {
     int n;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++)
        cin>>a[i];
     int q,m;
     cin>>q;
     for(int i=0;i<n;i++)
     {
         cin>>m;
         cout<<binarySearch(a,0,n-1,m);
     }
     return 0;
 }
