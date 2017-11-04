#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void bestprime(int n)
{
    //create boolean array and initialize all values to true.
    bool prime[n+1];
    memset(prime, true, sizeof(prime));

    for(int p=2; p*p<=n; p++)
    {
        //if prime[p] is not changed, then it is prime
        if(prime[p]==true)
        {
            for(int i = p*2; i<n;i+=p)
                prime[i]=false;
        }
    }
    for(int p=2;p<n; p++)
        if(prime[p])
            cout<<p<<" ";
}
int main()
{
    int n;
    cin>>n;
    bestprime(n);
    return 0;
}
