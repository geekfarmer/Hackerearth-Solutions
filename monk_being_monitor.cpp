#include <iostream>
#include<algorithm>
using namespace std;
struct mem
{
    int val,count;
};
int cmp(struct mem a,struct mem b)
{
    if(a.val<b.val)
      return 1;
    else
      return 0;
}
int cmp1(struct mem a,struct mem b)
{
    if(a.count<b.count)
      return 1;
    else
      return 0;
}
int main()
{
     int t,n;
     cin>>t;
     while(t)
     {
         int n;
         cin>>n;
         struct mem arr[n];
         for(int i=0;i<n;i++)
         {
            cin>>arr[i].val;
            arr[i].count=1;
         }
         sort(arr,arr+n,cmp);
         for(int i=1;i<n;i++)
         {
             if(arr[i].val==arr[i-1].val)
             {
              arr[i].count+=arr[i-1].count;
              arr[i-1].count=-1;
             }
         }
         sort(arr,arr+n,cmp1);
         struct mem temp;
         int k=0;
         while(arr[k].count<=0)
         {
             k++;

         }
         int op=arr[n-1].count-arr[k].count;
         if(op>0)
         cout<<op<<"\n";
         else
         cout<<"-1\n";
         t--;
     }
    return 0;
}
