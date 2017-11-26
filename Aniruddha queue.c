#include<iostream>
using namespace std;

int main(){
    int t;
    long long int n,dist,m;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>dist[i];
            count += dist[i];
        }
        cin>>m;
        m %= count;
        int ans;
        if(m==0)
        {
            for(int i=n-1;i>=0;--i)
            {
                if(ar[i]!=0)
                {
                    ans=i;
                    break;
                }
            }
        }
        else
        {
            for(int i=0;i<n;++i)
            {
                m-=ar[i];
                if(m<=0)
                {
                    ans=i;
                    break;
                }
            }
        }
        cout<<ans+1<<endl;

    }
    return 0;
}


