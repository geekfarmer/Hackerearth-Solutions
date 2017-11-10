#include<bits/stdc++.h>

using namespace std;
int main(){
    int t,m,n,fl;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&n,&m);
        fl=0;
        for(int i=0;i<=m;i++){
            long int temp= (long int)i*i;
            if(temp%m==n){
                cout<<i<<endl;
                fl=1;
                break;
            }
        }
        if(fl==0)
            cout<<-1<<endl;
    }
    return 0;
}
