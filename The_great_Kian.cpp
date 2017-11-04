#include<iostream>
using namespace std;

int main()
{
    int n,in,a=0,b=0,c=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>in;
        if(i%3==0)
            c +=in;
        if(i%3==1)
            a+=in;
        else
            b+=in;
    }
    cout<<a<<" "<<b<<" "<<c<<endl;
    return 0;
}
