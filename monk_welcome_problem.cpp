#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n],b[n],c[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<endl;
    for(int i=0;i<n;i++)
        cin>>b[i];
    cout<<endl;
    for(int i=0;i<n;i++)
       { c[i]=a[i]+b[i];
        cout<<c[i]<<" ";
       }
    return 0;
}