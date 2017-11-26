#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,i,aa=1;
        ll dp[100001];
        dp[0]=dp[1]=dp[2]=dp[3]=0;
        for(i=4;i<=100000;i=i+2)
        {
            dp[i]=dp[i+1]=aa;
            aa++;
        }
        cin>>n;
        if(n==1)
        {
            cout<<1<<endl;
        }
        else{
            n--;
            ll sum=n*(n+1);
            sum= sum/2;
            sum=sum+dp[n+1];
            cout<<sum<<endl;
        }
    }
    return 0;
}