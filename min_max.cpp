#include<iostream>
#include <cstdio>
#include <limits.h>
using namespace std;

int main()
{
    int c[101]={0};
    int n,num[1010],max = INT_MIN,min = INT_MAX;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>num[i];
        if(num[i] > max)
        {
            max = num[i];
        }
        if(num[i] < min)
        {
            min = num[i];
        }
        c[num[i]]++;
    }
    for(int i=min;i<=max;i++)
    {
        if(c[i] == 0)
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}
