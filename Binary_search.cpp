#include<iostream>

using namespace std;

int binarysearch(int a[], int l,int r,int x)
{
    if(r>=1)
    {
        int mid = l+(r-1)/2;
        if(a[mid]==x) return mid;
        if(a[mid]>x) return binarysearch(a,l,mid-1,x);
        return binarysearch(a,mid+1,r,x);
    }
    return 0;
}

int main()
{
    int n,x;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int size = sizeof(a)/sizeof(a[0]);
    cin>>x;
    cout<<binarysearch(a,0,n-1,x);
    return 0;
}
