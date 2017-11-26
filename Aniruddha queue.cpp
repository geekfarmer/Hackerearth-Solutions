#include<iostream>
using namespace std;

int main(){
    int t;
    long long int n,m,count;
    cin>>t;
    while(t--){
        cin>>n;
        long long int dist[n];
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
                if(dist[i]!=0)
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
                m-=dist[i];
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


