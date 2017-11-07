#include <bits/stdc++.h>
#define pi(x) printf("%d\n",x)
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    sort(a,a+n);
    int q;
    scanf("%d",&q);
    while(q--)
    {
        int ch,x;
        scanf("%d %d",&ch,&x);
        if(ch==0)
        {
            //int lb=lower_bound(a,a+n,x)-a;
            //printf("%d\n",n-lb);
            int low=0,high=n;
            while(high>low)
            {
                int mid=(low+high)/2;
                if(a[mid]<x)
                    low=mid+1;
                else
                    high=mid;
            }
            pi(n-low);

        }
        else
        {
            int ub=upper_bound(a,a+n,x)-a;
            printf("%d\n",n-ub);
        }
    }
    return 0;
}
